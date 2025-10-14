#include <javax/swing/text/StringContent$PosRec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/StringContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringContent = ::javax::swing::text::StringContent;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StringContent$PosRec_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StringContent;", nullptr, $FINAL | $SYNTHETIC, $field(StringContent$PosRec, this$0)},
	{"offset", "I", nullptr, 0, $field(StringContent$PosRec, offset)},
	{"unused", "Z", nullptr, 0, $field(StringContent$PosRec, unused)},
	{}
};

$MethodInfo _StringContent$PosRec_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StringContent;I)V", nullptr, 0, $method(static_cast<void(StringContent$PosRec::*)($StringContent*,int32_t)>(&StringContent$PosRec::init$))},
	{}
};

$InnerClassInfo _StringContent$PosRec_InnerClassesInfo_[] = {
	{"javax.swing.text.StringContent$PosRec", "javax.swing.text.StringContent", "PosRec", $FINAL},
	{}
};

$ClassInfo _StringContent$PosRec_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.text.StringContent$PosRec",
	"java.lang.Object",
	nullptr,
	_StringContent$PosRec_FieldInfo_,
	_StringContent$PosRec_MethodInfo_,
	nullptr,
	nullptr,
	_StringContent$PosRec_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StringContent"
};

$Object* allocate$StringContent$PosRec($Class* clazz) {
	return $of($alloc(StringContent$PosRec));
}

void StringContent$PosRec::init$($StringContent* this$0, int32_t offset) {
	$set(this, this$0, this$0);
	this->offset = offset;
}

StringContent$PosRec::StringContent$PosRec() {
}

$Class* StringContent$PosRec::load$($String* name, bool initialize) {
	$loadClass(StringContent$PosRec, name, initialize, &_StringContent$PosRec_ClassInfo_, allocate$StringContent$PosRec);
	return class$;
}

$Class* StringContent$PosRec::class$ = nullptr;

		} // text
	} // swing
} // javax