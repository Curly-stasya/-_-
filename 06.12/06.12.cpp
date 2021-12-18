#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
	int ch;
	unsigned int count = 0;
	setlocale(LC_ALL, "Rus");
	std::cout << "argc = " << argc << std::endl;
	if (argc == 1) {
		std::cout << "Program name -i source file - o destination file or " << std::endl << "Program_name - o destination_file - i source_file" << std::endl;
	}
	std::cout << argv[0] << std::endl;
	for (size_t k = 1; k < argc; ++k) {
		std::cout << argv[k] << std::endl;
	}
	if (argc > 1) { 
		std:: fstream ifs;
		ifs.open(argv[1],std::ios_base::in | std::ios_base::binary);
		if (ifs.is_open()) {
			ifs.seekg(18);
			int iWidth, iHeight = 0;
			ifs.read((char*)&iWidth, sizeof(int));
			ifs.read((char*)&iHeight, sizeof(int));
			std::cout << "Read width " << iWidth << std::endl;
			std::cout << "Read hight " << iHeight << std::endl;


			int bpp = 0;
			ifs.seekg(28);
			ifs.read((char*)&bpp, sizeof(int));
			std::cout << "Read bpp " << bpp << std::endl;

			int bitoffBits = 0;
			ifs.seekg(10);
			ifs.read((char*)&bitoffBits, sizeof(int));
			std::cout << "Read bitoffBits " << bitoffBits << std::endl;

			ifs.seekg(bitoffBits);


			//ИЗМЕНЕНИЕ РАЗМЕРОВ
			/*ifs.close();
			std::fstream ofs;
			ofs.open(argv[2], std::ios_base::binary | std::ios_base::in | std::ios_base::out);
			if (!ofs.is_open()) {
				std::cout << "can't open file";
			}
			else {
				ofs.seekp(18);
				ofs.write((char*)&iHeight, sizeof(int));
				//ofs.seekp(22);
				ofs.write((char*)&iWidth, sizeof(int));
				ofs.seekg(18);
				int iWidth1, iHeight1 = 0;
				ofs.read((char*)&iWidth1, sizeof(int));
				ofs.read((char*)&iHeight1, sizeof(int));
				std::cout << "Read width1  " << iWidth1 << std::endl;
				std::cout << "Read hight1  " << iHeight1 << std::endl;

			}*/


			//ВЫВОД КАРТИНКИ 33*32
			/*for (size_t rows = 0; rows < iHeight; ++rows) {
				int flag = 0;
				unsigned char piece = 0;
				unsigned char waste = 0;
				for (size_t cols = 0; cols < iWidth-(iWidth%32); cols += 8) {
					unsigned char bTmp = 0;
					ifs.read((char*)&bTmp, 1);
					if (ifs.eof()) {
						break;
					}
					for (unsigned char mask = 0x80; mask != 0; mask >>= 1) {
						std::cout << (((bTmp & mask) == 0) ? '1' : '0') << ' ';
					}
				}
				ifs.read((char*)&piece, 1);
				for (unsigned char mask = 0x80; mask != 0; mask >>= 1) {
					std::cout << (((piece & mask) == 0) ? '1' : '0') << ' ';
					break;
				}
				for (int k=0; k<3;++k){
					ifs.read((char*)&waste, 1);
				}
				std::cout << std::endl;
			}*/


			//ВЫВОД КАРТИНКИ С РАЗМЕРАМИ КРАТНЫМИ 32
			for (size_t rows = 0; rows < iHeight; ++rows) {
				for (size_t cols = 0; cols < iWidth; cols += 8) {
					unsigned char bTmp = 0;
					ifs.read((char*)&bTmp, 1);
					if (ifs.eof()) { break; }

					for (unsigned char mask = 0x80; mask != 0; mask >>= 1) {
						std::cout << (((bTmp & mask) == 0) ? ' ' : '0')<<' ';
					}
				}
				std::cout << std::endl;
			}



			ifs.close();
		}
		else
			std::cout << "Can't open file " << argv[1] << std::endl;
	}
}

