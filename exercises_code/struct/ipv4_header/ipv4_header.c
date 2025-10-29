typedef struct iphdr 
{
	uint8_t version : 4;
	uint8_t internet_header_length : 4;
	uint8_t service_type;
	uint16_t  total_length;
	uint16_t identification;
	uint16_t flags : 3;
	uint16_t fragments_offset : 13;
	uint8_t time_to_live;
	uint8_t protocol;
	uint16_t header_checksum;
	uint32_t source_ip;
	uint32_t dest_ip;
} __attribute((packed))__ ipv4_header;
