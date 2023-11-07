#pragma once
#include <string>
#include "DirectXTex/DirectXTex.h"
//テクスチャコンバーター
class TextureConverter
{

public:
	/// <summary>
	/// テクスチャをWICからDDSに変換する
	/// </summary>
	/// <param name="filePath">ファイルパス</path>
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	/// <summary>
	/// テクスチャファイル読み込み
	/// </summary>
	/// <param name="filePath">ファイルパス</path>
	void LoadWICTextureFromFile(const std::string& filePath);


private:
	/// <summary>
	/// マルチバイト文字列をワイド文字列に変換
	/// </summary>
	/// <param name="mString">マルチバイト文字列</path>
	/// <returns>ワイド文字列</returns>
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mString);

};