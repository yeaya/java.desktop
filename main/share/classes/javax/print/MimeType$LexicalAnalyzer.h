#ifndef _javax_print_MimeType$LexicalAnalyzer_h_
#define _javax_print_MimeType$LexicalAnalyzer_h_
//$ class javax.print.MimeType$LexicalAnalyzer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace print {

class MimeType$LexicalAnalyzer : public ::java::lang::Object {
	$class(MimeType$LexicalAnalyzer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	MimeType$LexicalAnalyzer();
	void init$($String* theSource);
	virtual $String* getLexeme();
	virtual char16_t getLexemeFirstCharacter();
	virtual int32_t getLexemeType();
	virtual void nextLexeme();
	$String* mySource = nullptr;
	int32_t mySourceLength = 0;
	int32_t myCurrentIndex = 0;
	int32_t myLexemeType = 0;
	int32_t myLexemeBeginIndex = 0;
	int32_t myLexemeEndIndex = 0;
};

	} // print
} // javax

#endif // _javax_print_MimeType$LexicalAnalyzer_h_