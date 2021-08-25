#include "Crypt7.h"
#include "Crypt12.h"

void decryptWhatsappDatabase14(const std::string& filename, const std::string& filenameDecrypted, const std::string& keyFilename)
{
	unsigned char key[32];
	unsigned char iv[16];

	loadKey(keyFilename, key, iv);
	decryptWhatsappDatabase12_14(filename, filenameDecrypted, key, 67, 191, 0);
}
