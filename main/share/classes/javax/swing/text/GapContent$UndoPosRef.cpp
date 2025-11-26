#include <javax/swing/text/GapContent$UndoPosRef.h>

#include <javax/swing/text/GapContent$MarkData.h>
#include <javax/swing/text/GapContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GapContent = ::javax::swing::text::GapContent;
using $GapContent$MarkData = ::javax::swing::text::GapContent$MarkData;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GapContent$UndoPosRef_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/GapContent;", nullptr, $FINAL | $SYNTHETIC, $field(GapContent$UndoPosRef, this$0)},
	{"undoLocation", "I", nullptr, $PROTECTED, $field(GapContent$UndoPosRef, undoLocation)},
	{"rec", "Ljavax/swing/text/GapContent$MarkData;", nullptr, $PROTECTED, $field(GapContent$UndoPosRef, rec)},
	{}
};

$MethodInfo _GapContent$UndoPosRef_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/GapContent;Ljavax/swing/text/GapContent$MarkData;)V", nullptr, 0, $method(static_cast<void(GapContent$UndoPosRef::*)($GapContent*,$GapContent$MarkData*)>(&GapContent$UndoPosRef::init$))},
	{"resetLocation", "(II)V", nullptr, $PROTECTED, $method(static_cast<void(GapContent$UndoPosRef::*)(int32_t,int32_t)>(&GapContent$UndoPosRef::resetLocation))},
	{}
};

$InnerClassInfo _GapContent$UndoPosRef_InnerClassesInfo_[] = {
	{"javax.swing.text.GapContent$UndoPosRef", "javax.swing.text.GapContent", "UndoPosRef", $FINAL},
	{}
};

$ClassInfo _GapContent$UndoPosRef_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.text.GapContent$UndoPosRef",
	"java.lang.Object",
	nullptr,
	_GapContent$UndoPosRef_FieldInfo_,
	_GapContent$UndoPosRef_MethodInfo_,
	nullptr,
	nullptr,
	_GapContent$UndoPosRef_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.GapContent"
};

$Object* allocate$GapContent$UndoPosRef($Class* clazz) {
	return $of($alloc(GapContent$UndoPosRef));
}

void GapContent$UndoPosRef::init$($GapContent* this$0, $GapContent$MarkData* rec) {
	$set(this, this$0, this$0);
	$set(this, rec, rec);
	this->undoLocation = $nc(rec)->getOffset();
}

void GapContent$UndoPosRef::resetLocation(int32_t endOffset, int32_t g1) {
	if (this->undoLocation != endOffset) {
		$nc(this->rec)->index = this->undoLocation;
	} else {
		$nc(this->rec)->index = g1;
	}
}

GapContent$UndoPosRef::GapContent$UndoPosRef() {
}

$Class* GapContent$UndoPosRef::load$($String* name, bool initialize) {
	$loadClass(GapContent$UndoPosRef, name, initialize, &_GapContent$UndoPosRef_ClassInfo_, allocate$GapContent$UndoPosRef);
	return class$;
}

$Class* GapContent$UndoPosRef::class$ = nullptr;

		} // text
	} // swing
} // javax