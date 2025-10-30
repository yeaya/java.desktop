#include <javax/print/MimeType$LexicalAnalyzer.h>

#include <javax/print/MimeType.h>
#include <jcpp.h>

using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MimeType = ::javax::print::MimeType;

namespace javax {
	namespace print {

$FieldInfo _MimeType$LexicalAnalyzer_FieldInfo_[] = {
	{"mySource", "Ljava/lang/String;", nullptr, $PROTECTED, $field(MimeType$LexicalAnalyzer, mySource)},
	{"mySourceLength", "I", nullptr, $PROTECTED, $field(MimeType$LexicalAnalyzer, mySourceLength)},
	{"myCurrentIndex", "I", nullptr, $PROTECTED, $field(MimeType$LexicalAnalyzer, myCurrentIndex)},
	{"myLexemeType", "I", nullptr, $PROTECTED, $field(MimeType$LexicalAnalyzer, myLexemeType)},
	{"myLexemeBeginIndex", "I", nullptr, $PROTECTED, $field(MimeType$LexicalAnalyzer, myLexemeBeginIndex)},
	{"myLexemeEndIndex", "I", nullptr, $PROTECTED, $field(MimeType$LexicalAnalyzer, myLexemeEndIndex)},
	{}
};

$MethodInfo _MimeType$LexicalAnalyzer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MimeType$LexicalAnalyzer::*)($String*)>(&MimeType$LexicalAnalyzer::init$))},
	{"getLexeme", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLexemeFirstCharacter", "()C", nullptr, $PUBLIC},
	{"getLexemeType", "()I", nullptr, $PUBLIC},
	{"nextLexeme", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MimeType$LexicalAnalyzer_InnerClassesInfo_[] = {
	{"javax.print.MimeType$LexicalAnalyzer", "javax.print.MimeType", "LexicalAnalyzer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MimeType$LexicalAnalyzer_ClassInfo_ = {
	$ACC_SUPER,
	"javax.print.MimeType$LexicalAnalyzer",
	"java.lang.Object",
	nullptr,
	_MimeType$LexicalAnalyzer_FieldInfo_,
	_MimeType$LexicalAnalyzer_MethodInfo_,
	nullptr,
	nullptr,
	_MimeType$LexicalAnalyzer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.print.MimeType"
};

$Object* allocate$MimeType$LexicalAnalyzer($Class* clazz) {
	return $of($alloc(MimeType$LexicalAnalyzer));
}

void MimeType$LexicalAnalyzer::init$($String* theSource) {
	$set(this, mySource, theSource);
	this->mySourceLength = $nc(theSource)->length();
	this->myCurrentIndex = 0;
	nextLexeme();
}

int32_t MimeType$LexicalAnalyzer::getLexemeType() {
	return this->myLexemeType;
}

$String* MimeType$LexicalAnalyzer::getLexeme() {
	return (this->myLexemeBeginIndex >= this->mySourceLength ? ($String*)nullptr : $nc(this->mySource)->substring(this->myLexemeBeginIndex, this->myLexemeEndIndex));
}

char16_t MimeType$LexicalAnalyzer::getLexemeFirstCharacter() {
	return (this->myLexemeBeginIndex >= this->mySourceLength ? u'\0' : $nc(this->mySource)->charAt(this->myLexemeBeginIndex));
}

void MimeType$LexicalAnalyzer::nextLexeme() {
	int32_t state = 0;
	int32_t commentLevel = 0;
	char16_t c = 0;
	while (state >= 0) {
		switch (state) {
		case 0:
			{
				if (this->myCurrentIndex >= this->mySourceLength) {
					this->myLexemeType = 3;
					this->myLexemeBeginIndex = this->mySourceLength;
					this->myLexemeEndIndex = this->mySourceLength;
					state = -1;
				} else if ($Character::isWhitespace(c = $nc(this->mySource)->charAt(this->myCurrentIndex++))) {
					state = 0;
				} else if (c == u'\"') {
					this->myLexemeType = 1;
					this->myLexemeBeginIndex = this->myCurrentIndex;
					state = 1;
				} else if (c == u'(') {
					++commentLevel;
					state = 3;
				} else if (c == u'/' || c == u';' || c == u'=' || c == u')' || c == u'<' || c == u'>' || c == u'@' || c == u',' || c == u':' || c == u'\\' || c == u'[' || c == u']' || c == u'?') {
					this->myLexemeType = 2;
					this->myLexemeBeginIndex = this->myCurrentIndex - 1;
					this->myLexemeEndIndex = this->myCurrentIndex;
					state = -1;
				} else {
					this->myLexemeType = 0;
					this->myLexemeBeginIndex = this->myCurrentIndex - 1;
					state = 5;
				}
				break;
			}
		case 1:
			{
				if (this->myCurrentIndex >= this->mySourceLength) {
					this->myLexemeType = 4;
					this->myLexemeBeginIndex = this->mySourceLength;
					this->myLexemeEndIndex = this->mySourceLength;
					state = -1;
				} else if ((c = $nc(this->mySource)->charAt(this->myCurrentIndex++)) == u'\"') {
					this->myLexemeEndIndex = this->myCurrentIndex - 1;
					state = -1;
				} else if (c == u'\\') {
					state = 2;
				} else {
					state = 1;
				}
				break;
			}
		case 2:
			{
				if (this->myCurrentIndex >= this->mySourceLength) {
					this->myLexemeType = 4;
					this->myLexemeBeginIndex = this->mySourceLength;
					this->myLexemeEndIndex = this->mySourceLength;
					state = -1;
				} else {
					++this->myCurrentIndex;
					state = 1;
				}
				break;
			}
		case 3:
			{
				if (this->myCurrentIndex >= this->mySourceLength) {
					this->myLexemeType = 4;
					this->myLexemeBeginIndex = this->mySourceLength;
					this->myLexemeEndIndex = this->mySourceLength;
					state = -1;
				} else if ((c = $nc(this->mySource)->charAt(this->myCurrentIndex++)) == u'(') {
					++commentLevel;
					state = 3;
				} else if (c == u')') {
					--commentLevel;
					state = commentLevel == 0 ? 0 : 3;
				} else if (c == u'\\') {
					state = 4;
				} else {
					state = 3;
				}
				break;
			}
		case 4:
			{
				if (this->myCurrentIndex >= this->mySourceLength) {
					this->myLexemeType = 4;
					this->myLexemeBeginIndex = this->mySourceLength;
					this->myLexemeEndIndex = this->mySourceLength;
					state = -1;
				} else {
					++this->myCurrentIndex;
					state = 3;
				}
				break;
			}
		case 5:
			{
				if (this->myCurrentIndex >= this->mySourceLength) {
					this->myLexemeEndIndex = this->myCurrentIndex;
					state = -1;
				} else if ($Character::isWhitespace(c = $nc(this->mySource)->charAt(this->myCurrentIndex++))) {
					this->myLexemeEndIndex = this->myCurrentIndex - 1;
					state = -1;
				} else if (c == u'\"' || c == u'(' || c == u'/' || c == u';' || c == u'=' || c == u')' || c == u'<' || c == u'>' || c == u'@' || c == u',' || c == u':' || c == u'\\' || c == u'[' || c == u']' || c == u'?') {
					--this->myCurrentIndex;
					this->myLexemeEndIndex = this->myCurrentIndex;
					state = -1;
				} else {
					state = 5;
				}
				break;
			}
		}
	}
}

MimeType$LexicalAnalyzer::MimeType$LexicalAnalyzer() {
}

$Class* MimeType$LexicalAnalyzer::load$($String* name, bool initialize) {
	$loadClass(MimeType$LexicalAnalyzer, name, initialize, &_MimeType$LexicalAnalyzer_ClassInfo_, allocate$MimeType$LexicalAnalyzer);
	return class$;
}

$Class* MimeType$LexicalAnalyzer::class$ = nullptr;

	} // print
} // javax