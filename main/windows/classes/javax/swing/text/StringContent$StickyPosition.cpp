#include <javax/swing/text/StringContent$StickyPosition.h>

#include <java/util/Vector.h>
#include <javax/swing/text/StringContent$PosRec.h>
#include <javax/swing/text/StringContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $Position = ::javax::swing::text::Position;
using $StringContent = ::javax::swing::text::StringContent;
using $StringContent$PosRec = ::javax::swing::text::StringContent$PosRec;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _StringContent$StickyPosition_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/StringContent;", nullptr, $FINAL | $SYNTHETIC, $field(StringContent$StickyPosition, this$0)},
	{"rec", "Ljavax/swing/text/StringContent$PosRec;", nullptr, 0, $field(StringContent$StickyPosition, rec)},
	{}
};

$MethodInfo _StringContent$StickyPosition_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/StringContent;I)V", nullptr, 0, $method(static_cast<void(StringContent$StickyPosition::*)($StringContent*,int32_t)>(&StringContent$StickyPosition::init$))},
	{"finalize", "()V", nullptr, $PROTECTED, nullptr, "java.lang.Throwable"},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StringContent$StickyPosition_InnerClassesInfo_[] = {
	{"javax.swing.text.StringContent$StickyPosition", "javax.swing.text.StringContent", "StickyPosition", $FINAL},
	{}
};

$ClassInfo _StringContent$StickyPosition_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.text.StringContent$StickyPosition",
	"java.lang.Object",
	"javax.swing.text.Position",
	_StringContent$StickyPosition_FieldInfo_,
	_StringContent$StickyPosition_MethodInfo_,
	nullptr,
	nullptr,
	_StringContent$StickyPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.StringContent"
};

$Object* allocate$StringContent$StickyPosition($Class* clazz) {
	return $of($alloc(StringContent$StickyPosition));
}

void StringContent$StickyPosition::init$($StringContent* this$0, int32_t offset) {
	$set(this, this$0, this$0);
	$set(this, rec, $new($StringContent$PosRec, this$0, offset));
	$nc(this$0->marks)->addElement(this->rec);
}

int32_t StringContent$StickyPosition::getOffset() {
	return $nc(this->rec)->offset;
}

void StringContent$StickyPosition::finalize() {
	$nc(this->rec)->unused = true;
}

$String* StringContent$StickyPosition::toString() {
	return $Integer::toString(getOffset());
}

StringContent$StickyPosition::StringContent$StickyPosition() {
}

$Class* StringContent$StickyPosition::load$($String* name, bool initialize) {
	$loadClass(StringContent$StickyPosition, name, initialize, &_StringContent$StickyPosition_ClassInfo_, allocate$StringContent$StickyPosition);
	return class$;
}

$Class* StringContent$StickyPosition::class$ = nullptr;

		} // text
	} // swing
} // javax