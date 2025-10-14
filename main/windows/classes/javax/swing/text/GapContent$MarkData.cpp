#include <javax/swing/text/GapContent$MarkData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/ref/Reference.h>
#include <java/lang/ref/ReferenceQueue.h>
#include <java/lang/ref/WeakReference.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/text/GapContent$StickyPosition.h>
#include <javax/swing/text/GapContent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Reference = ::java::lang::ref::Reference;
using $ReferenceQueue = ::java::lang::ref::ReferenceQueue;
using $WeakReference = ::java::lang::ref::WeakReference;
using $GapContent = ::javax::swing::text::GapContent;
using $GapContent$StickyPosition = ::javax::swing::text::GapContent$StickyPosition;
using $GapVector = ::javax::swing::text::GapVector;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _GapContent$MarkData_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/GapContent;", nullptr, $FINAL | $SYNTHETIC, $field(GapContent$MarkData, this$0)},
	{"index", "I", nullptr, 0, $field(GapContent$MarkData, index)},
	{}
};

$MethodInfo _GapContent$MarkData_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/GapContent;I)V", nullptr, 0, $method(static_cast<void(GapContent$MarkData::*)($GapContent*,int32_t)>(&GapContent$MarkData::init$))},
	{"<init>", "(Ljavax/swing/text/GapContent;ILjavax/swing/text/GapContent$StickyPosition;Ljava/lang/ref/ReferenceQueue;)V", "(ILjavax/swing/text/GapContent$StickyPosition;Ljava/lang/ref/ReferenceQueue<-Ljavax/swing/text/GapContent$StickyPosition;>;)V", 0, $method(static_cast<void(GapContent$MarkData::*)($GapContent*,int32_t,$GapContent$StickyPosition*,$ReferenceQueue*)>(&GapContent$MarkData::init$))},
	{"getOffset", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(GapContent$MarkData::*)()>(&GapContent$MarkData::getOffset))},
	{"getPosition", "()Ljavax/swing/text/GapContent$StickyPosition;", nullptr, 0, $method(static_cast<$GapContent$StickyPosition*(GapContent$MarkData::*)()>(&GapContent$MarkData::getPosition))},
	{}
};

$InnerClassInfo _GapContent$MarkData_InnerClassesInfo_[] = {
	{"javax.swing.text.GapContent$MarkData", "javax.swing.text.GapContent", "MarkData", $FINAL},
	{"javax.swing.text.GapContent$StickyPosition", "javax.swing.text.GapContent", "StickyPosition", $FINAL},
	{}
};

$ClassInfo _GapContent$MarkData_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.text.GapContent$MarkData",
	"java.lang.ref.WeakReference",
	nullptr,
	_GapContent$MarkData_FieldInfo_,
	_GapContent$MarkData_MethodInfo_,
	"Ljava/lang/ref/WeakReference<Ljavax/swing/text/GapContent$StickyPosition;>;",
	nullptr,
	_GapContent$MarkData_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.GapContent"
};

$Object* allocate$GapContent$MarkData($Class* clazz) {
	return $of($alloc(GapContent$MarkData));
}

void GapContent$MarkData::init$($GapContent* this$0, int32_t index) {
	$set(this, this$0, this$0);
	$WeakReference::init$(nullptr);
	this->index = index;
}

void GapContent$MarkData::init$($GapContent* this$0, int32_t index, $GapContent$StickyPosition* position, $ReferenceQueue* queue) {
	$set(this, this$0, this$0);
	$WeakReference::init$(position, queue);
	this->index = index;
}

int32_t GapContent$MarkData::getOffset() {
	int32_t g0 = this->this$0->getGapStart();
	int32_t g1 = this->this$0->getGapEnd();
	int32_t offs = (this->index < g0) ? this->index : this->index - (g1 - g0);
	return $Math::max(offs, 0);
}

$GapContent$StickyPosition* GapContent$MarkData::getPosition() {
	return $cast($GapContent$StickyPosition, get());
}

GapContent$MarkData::GapContent$MarkData() {
}

$Class* GapContent$MarkData::load$($String* name, bool initialize) {
	$loadClass(GapContent$MarkData, name, initialize, &_GapContent$MarkData_ClassInfo_, allocate$GapContent$MarkData);
	return class$;
}

$Class* GapContent$MarkData::class$ = nullptr;

		} // text
	} // swing
} // javax