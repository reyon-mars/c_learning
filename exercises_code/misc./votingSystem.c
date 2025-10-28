#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LENGTH 100
#define MAX_CANDIDATES 100
#define MAX_VOTERS 100

// Structure for candidate details
typedef struct
{
    char name[MAX_LENGTH];
    char party[MAX_LENGTH];
    char constituency[MAX_LENGTH];
} Candidate;

// Structure for voter details
typedef struct
{
    int sno;
    char name[MAX_LENGTH];
    char dob[MAX_LENGTH];
    char address[MAX_LENGTH];
    char password[MAX_LENGTH];
    bool voted;
} Voter;

// Function prototypes
void createElectionSchedule();
void addCandidate();
void registerVoter();
void updateVoterDetails();
void searchVoterDetails();
void castVote();
void displayVoteResult();
bool authenticateVoter(int sno, char *password);
void displayCandidates(const char *constituency);

// Global variables
Candidate candidates[MAX_CANDIDATES];
int numCandidates = 0;
Voter voters[MAX_VOTERS];
int numVoters = 0;

int main()
{
    int choice;
    do
    {
        printf("\n**** Election Management System ****\n");
        printf("1. Create Election Schedule\n");
        printf("2. Add Candidate\n");
        printf("3. Register Voter\n");
        printf("4. Update Voter Details\n");
        printf("5. Search Voter Details\n");
        printf("6. Cast Vote\n");
        printf("7. Display Vote Result\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createElectionSchedule();
            break;
        case 2:
            addCandidate();
            break;
        case 3:
            registerVoter();
            break;
        case 4:
            updateVoterDetails();
            break;
        case 5:
            searchVoterDetails();
            break;
        case 6:
            castVote();
            break;
        case 7:
            displayVoteResult();
            break;
        case 8:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    return 0;
}

void createElectionSchedule()
{
    char constituency[MAX_LENGTH];
    char date[MAX_LENGTH];

    printf("Enter Constituency: ");
    scanf("%s", constituency);
    printf("Enter Date of Election (yyyymmdd): ");
    scanf("%s", date);

    FILE *fp = fopen("schedule.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    fprintf(fp, "%s\t%s\n", constituency, date);
    fclose(fp);

    printf("Election schedule created and saved successfully.\n");
}

void addCandidate()
{
    char name[MAX_LENGTH];
    char party[MAX_LENGTH];
    char constituency[MAX_LENGTH];

    printf("Enter Name of Candidate: ");
    scanf("%s", name);
    printf("Enter Political Party: ");
    scanf("%s", party);
    printf("Enter Candidacy From: ");
    scanf("%s", constituency);

    FILE *fp = fopen("candidatelist.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    fprintf(fp, "%s\t%s\t%s\n", name, party, constituency);
    fclose(fp);

    printf("Candidate details added and saved successfully.\n");
}

void registerVoter()
{
    char name[MAX_LENGTH];
    char dob[MAX_LENGTH];
    char address[MAX_LENGTH];
    char password[MAX_LENGTH];

    printf("Enter Name of Voter: ");
    scanf("%s", name);
    printf("Enter Date of Birth (yyyy/mm/dd): ");
    scanf("%s", dob);
    printf("Enter Address: ");
    scanf("%s", address);
    printf("Enter Password: ");
    scanf("%s", password);

    // Check age eligibility
    int birthYear = atoi(strtok(dob, "/"));
    int currentYear = 2024; // Assuming current year is 2024
    if (currentYear - birthYear < 18)
    {
        printf("Voter must be 18 years or older.\n");
        return;
    }

    FILE *fp = fopen("voterlist.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    fprintf(fp, "%d\t%s\t%s\t%s\t%s\t0\n", numVoters + 120, name, dob, address, password);
    fclose(fp);

    printf("Voter registered successfully.\n");
    numVoters++;
}

void updateVoterDetails()
{
    int voterSno;
    char newPassword[MAX_LENGTH];

    printf("Enter Voter SNO to update details: ");
    scanf("%d", &voterSno);

    // Search for voter by SNO
    int index = -1;
    for (int i = 0; i < numVoters; i++)
    {
        if (voters[i].sno == voterSno)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Voter not found.\n");
        return;
    }

    // Prompt for new password
    printf("Enter new password: ");
    scanf("%s", newPassword);

    // Update voter's password
    strcpy(voters[index].password, newPassword);

    // Update the details in the file
    FILE *fp = fopen("voterlist.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < numVoters; i++)
    {
        fprintf(fp, "%d\t%s\t%s\t%s\t%s\t%d\n", voters[i].sno, voters[i].name, voters[i].dob, voters[i].address, voters[i].password, voters[i].voted);
    }

    fclose(fp);

    printf("Voter details updated successfully.\n");
}

void searchVoterDetails()
{
    int voterSno;

    printf("Enter Voter SNO to search details: ");
    scanf("%d", &voterSno);

    // Search for voter by SNO
    int index = -1;
    for (int i = 0; i < numVoters; i++)
    {
        if (voters[i].sno == voterSno)
        {
            index = i;
            break;
        }
    }

    if (index == -1)
    {
        printf("Voter not found.\n");
        return;
    }

    // Display voter details
    printf("Voter Details:\n");
    printf("SNO: %d\n", voters[index].sno);
    printf("Name: %s\n", voters[index].name);
    printf("Date of Birth: %s\n", voters[index].dob);
    printf("Address: %s\n", voters[index].address);
    printf("Password: %s\n", voters[index].password);
    printf("Has Voted: %s\n", voters[index].voted ? "Yes" : "No");
}

void castVote()
{
    int voterSno;
    char password[MAX_LENGTH];

    printf("Enter Voter SNO: ");
    scanf("%d", &voterSno);
    printf("Enter Password: ");
    scanf("%s", password);

    if (!authenticateVoter(voterSno, password))
    {
        printf("Authentication failed. Invalid SNO or password.\n");
        return;
    }

    // Display list of candidates for the voter's constituency
    printf("\nCandidates for your constituency:\n");
    displayCandidates(voters[voterSno - 120].address);

    // Allow voter to cast vote
    int choice;
    printf("Enter the SNO of the candidate you want to vote for: ");
    scanf("%d", &choice);

    // Check if the candidate SNO is valid
    if (choice < 1 || choice > numCandidates)
    {
        printf("Invalid candidate SNO.\n");
        return;
    }

    // Store the vote in votecount.txt
    FILE *votecount_fp = fopen("votecount.txt", "a");
    if (votecount_fp == NULL)
    {
        printf("Error opening votecount.txt.\n");
        return;
    }

    fprintf(votecount_fp, "%s\t%s\t%s\n", voters[voterSno - 120].name, voters[voterSno - 120].address, candidates[choice - 1].name);
    fclose(votecount_fp);

    // Mark the voter as voted
    voters[voterSno - 120].voted = true;

    printf("Vote casted successfully.\n");
}
void displayVoteResult()
{
    printf("Vote Result:\n");

    FILE *fp = fopen("votecount.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    printf("Voter Name\tConstituency\tCandidate Voted For\n");
    char voterName[MAX_LENGTH], constituency[MAX_LENGTH], candidateName[MAX_LENGTH];
    while (fscanf(fp, "%s %s %s", voterName, constituency, candidateName) != EOF)
    {
        printf("%s\t\t%s\t\t%s\n", voterName, constituency, candidateName);
    }

    fclose(fp);
}

bool authenticateVoter(int sno, char *password)
{
    // Check if sno and password match with any registered voter
    for (int i = 0; i < numVoters; i++)
    {
        if (voters[i].sno == sno && strcmp(voters[i].password, password) == 0)
        {
            if (voters[i].voted)
            {
                printf("You have already voted.\n");
                return false;
            }
            return true;
        }
    }
    return false;
}

void displayCandidates(const char *constituency)
{
    printf("Candidates for Constituency %s:\n", constituency);

    FILE *fp = fopen("candidatelist.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    char name[MAX_LENGTH], party[MAX_LENGTH], cons[MAX_LENGTH];
    while (fscanf(fp, "%s %s %s", name, party, cons) != EOF)
    {
        if (strcmp(cons, constituency) == 0)
        {
            printf("Name: %s\nParty: %s\n\n", name, party);
        }
    }

    fclose(fp);
}
