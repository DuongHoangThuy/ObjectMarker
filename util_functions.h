#ifndef __UTIL_FUNC__
#define __UTIL_FUNC__

#include <string>
#include <vector>

namespace util{

	inline int round(double a){ return (int)(a + 0.5);};

	// �f�B���N�g������摜�t�@�C�����ꗗ���擾
	bool ReadImageFilesInDirectory(const std::string& img_dir, std::vector<std::string>& image_lists);

	std::string AskQuestionGetString(const std::string& question);
	int AskQuestionGetInt(const std::string& question);
	double AskQuestionGetDouble(const std::string& question);

}

#endif