char *pho_chars[4]={
	"   ㄅㄆㄇㄈㄉㄊㄋㄌㄍㄎㄏㄐㄑㄒㄓㄔㄕㄖㄗㄘㄙ【】、", // 5 bits
	"   ㄧㄨㄩ",                                           // 2
	"   ㄚㄛㄜㄝㄞㄟㄠㄡㄢㄣㄤㄥㄦ",                       // 4
	"   ˙ ˊ ˇ ˋ "                                      // 3, 聲調在 UTF-8 是 2 bytes, 所以要填入空白。
};
