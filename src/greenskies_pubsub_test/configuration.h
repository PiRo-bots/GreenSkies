char* ssid = "";
char* password = "";

//static ip, if any
byte ip[] = {192,168,1,20};
// the router's gateway address:
byte gateway[] = { 192,168,1,1 };
// the subnet:
byte subnet[] = { 255,255,255,0 };

// The port to listen for incoming TCP connections
#define LISTEN_PORT  3020
