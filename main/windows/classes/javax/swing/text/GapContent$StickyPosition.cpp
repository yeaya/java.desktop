#include <javax/swing/text/GapContent$StickyPosition.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/GapContent$MarkData.h>
#include <javax/swing/text/GapContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $GapContent = ::javax::swing::text::GapContent;
using $GapContent$MarkData = ::javax::swing::text::GapContent$MarkData;
using $Position = ::javax::swing::text::Position;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GapContent$StickyPosition_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/GapContent;", nullptr, $FINAL | $SYNTHETIC, $field(GapContent$StickyPosition, this$0)},
	{"mark", "Ljavax/swing/text/GapContent$MarkData;", nullptr, 0, $field(GapContent$StickyPosition, mark)},
	{}
};

$MethodInfo _GapContent$StickyPosition_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/GapContent;)V", nullptr, 0, $method(static_cast<void(GapContent$StickyPosition::*)($GapContent*)>(&GapContent$StickyPosition::init$))},
	{"getOffset", "()I", nullptr, $PUBLIC},
	{"setMark", "(Ljavax/swing/text/GapContent$MarkData;)V", nullptr, 0, $method(static_cast<void(GapContent$StickyPosition::*)($GapContent$MarkData*)>(&GapContent$StickyPosition::setMark))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GapContent$StickyPosition_InnerClassesInfo_[] = {
	{"javax.swing.text.GapContent$StickyPosition", "javax.swing.text.GapContent", "StickyPosition", $FINAL},
	{}
};

$ClassInfo _GapContent$StickyPosition_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.text.GapContent$StickyPosition",
	"java.lang.Object",
	"javax.swing.text.Position",
	_GapContent$StickyPosition_FieldInfo_,
	_GapContent$StickyPosition_MethodInfo_,
	nullptr,
	nullptr,
	_GapContent$StickyPosition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.GapContent"
};

$Object* allocate$GapContent$StickyPosition($Class* clazz) {
	return $of($alloc(GapContent$StickyPosition));
}

void GapContent$StickyPosition::init$($GapContent* this$0) {
	$set(this, this$0, this$0);
}

void GapContent$StickyPosition::setMark($GapContent$MarkData* mark) {
	$set(this, mark, mark);
}

int32_t GapContent$StickyPosition::getOffset() {
	return $nc(this->mark)->getOffset();
}

$String* GapContent$StickyPosition::toString() {
	return $Integer::toString(getOffset());
}

GapContent$StickyPosition::GapContent$StickyPosition() {
}

$Class* GapContent$StickyPosition::load$($String* name, bool initialize) {
	$loadClass(GapContent$StickyPosition, name, initialize, &_GapContent$StickyPosition_ClassInfo_, allocate$GapContent$StickyPosition);
	return class$;
}

$Class* GapContent$StickyPosition::class$ = nullptr;

		} // text
	} // swing
} // javax