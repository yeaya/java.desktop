#include <javax/swing/text/rtf/RTFGenerator$CharacterKeywordPair.h>

#include <javax/swing/text/rtf/RTFGenerator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$FieldInfo _RTFGenerator$CharacterKeywordPair_FieldInfo_[] = {
	{"character", "C", nullptr, $PUBLIC, $field(RTFGenerator$CharacterKeywordPair, character)},
	{"keyword", "Ljava/lang/String;", nullptr, $PUBLIC, $field(RTFGenerator$CharacterKeywordPair, keyword)},
	{}
};

$MethodInfo _RTFGenerator$CharacterKeywordPair_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(RTFGenerator$CharacterKeywordPair::*)()>(&RTFGenerator$CharacterKeywordPair::init$))},
	{}
};

$InnerClassInfo _RTFGenerator$CharacterKeywordPair_InnerClassesInfo_[] = {
	{"javax.swing.text.rtf.RTFGenerator$CharacterKeywordPair", "javax.swing.text.rtf.RTFGenerator", "CharacterKeywordPair", $STATIC},
	{}
};

$ClassInfo _RTFGenerator$CharacterKeywordPair_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.rtf.RTFGenerator$CharacterKeywordPair",
	"java.lang.Object",
	nullptr,
	_RTFGenerator$CharacterKeywordPair_FieldInfo_,
	_RTFGenerator$CharacterKeywordPair_MethodInfo_,
	nullptr,
	nullptr,
	_RTFGenerator$CharacterKeywordPair_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.rtf.RTFGenerator"
};

$Object* allocate$RTFGenerator$CharacterKeywordPair($Class* clazz) {
	return $of($alloc(RTFGenerator$CharacterKeywordPair));
}

void RTFGenerator$CharacterKeywordPair::init$() {
}

RTFGenerator$CharacterKeywordPair::RTFGenerator$CharacterKeywordPair() {
}

$Class* RTFGenerator$CharacterKeywordPair::load$($String* name, bool initialize) {
	$loadClass(RTFGenerator$CharacterKeywordPair, name, initialize, &_RTFGenerator$CharacterKeywordPair_ClassInfo_, allocate$RTFGenerator$CharacterKeywordPair);
	return class$;
}

$Class* RTFGenerator$CharacterKeywordPair::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax