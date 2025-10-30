#include <javax/swing/text/StringContent$UndoPosRef.h>

#include <javax/swing/text/StringContent$PosRec.h>
#include <javax/swing/text/StringContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringContent = ::javax::swing::text::StringContent;
using $StringContent$PosRec = ::javax::swing::text::StringContent$PosRec;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StringContent$UndoPosRef_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StringContent;", nullptr, $FINAL | $SYNTHETIC, $field(StringContent$UndoPosRef, this$0)},
	{"undoLocation", "I", nullptr, $PROTECTED, $field(StringContent$UndoPosRef, undoLocation)},
	{"rec", "Ljavax/swing/text/StringContent$PosRec;", nullptr, $PROTECTED, $field(StringContent$UndoPosRef, rec)},
	{}
};

$MethodInfo _StringContent$UndoPosRef_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StringContent;Ljavax/swing/text/StringContent$PosRec;)V", nullptr, 0, $method(static_cast<void(StringContent$UndoPosRef::*)($StringContent*,$StringContent$PosRec*)>(&StringContent$UndoPosRef::init$))},
	{"resetLocation", "()V", nullptr, $PROTECTED, $method(static_cast<void(StringContent$UndoPosRef::*)()>(&StringContent$UndoPosRef::resetLocation))},
	{}
};

$InnerClassInfo _StringContent$UndoPosRef_InnerClassesInfo_[] = {
	{"javax.swing.text.StringContent$UndoPosRef", "javax.swing.text.StringContent", "UndoPosRef", $FINAL},
	{}
};

$ClassInfo _StringContent$UndoPosRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.text.StringContent$UndoPosRef",
	"java.lang.Object",
	nullptr,
	_StringContent$UndoPosRef_FieldInfo_,
	_StringContent$UndoPosRef_MethodInfo_,
	nullptr,
	nullptr,
	_StringContent$UndoPosRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StringContent"
};

$Object* allocate$StringContent$UndoPosRef($Class* clazz) {
	return $of($alloc(StringContent$UndoPosRef));
}

void StringContent$UndoPosRef::init$($StringContent* this$0, $StringContent$PosRec* rec) {
	$set(this, this$0, this$0);
	$set(this, rec, rec);
	this->undoLocation = $nc(rec)->offset;
}

void StringContent$UndoPosRef::resetLocation() {
	$nc(this->rec)->offset = this->undoLocation;
}

StringContent$UndoPosRef::StringContent$UndoPosRef() {
}

$Class* StringContent$UndoPosRef::load$($String* name, bool initialize) {
	$loadClass(StringContent$UndoPosRef, name, initialize, &_StringContent$UndoPosRef_ClassInfo_, allocate$StringContent$UndoPosRef);
	return class$;
}

$Class* StringContent$UndoPosRef::class$ = nullptr;

		} // text
	} // swing
} // javax