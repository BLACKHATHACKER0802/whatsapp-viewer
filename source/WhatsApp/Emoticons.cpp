#include "./EmoticonsUnicodeToSoftbank.h"
#include "../Platforms/Win32/GUI/SmileyList.h"

bool isSmiley(int character)
{
	for (int i = 0; i < smileyCount; i++)
	{
		if (smileyList[i].character == character)
		{
			return true;
		}
	}

	return false;
}

int getSmiley(int character)
{
	if (isSmiley(character))
	{
		return character;
	}

	auto it = emoticonsUnicodeToSoftbank.find(character);
	if (it != emoticonsUnicodeToSoftbank.end())
	{
		if (isSmiley(it->second))
		{
			return it->second;
		}
	}

	return 0;
}
