#include <javax/swing/text/JTextComponent$AccessibleJTextComponent$IndexedSegment.h>

#include <javax/swing/text/JTextComponent$AccessibleJTextComponent.h>
#include <javax/swing/text/Segment.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextComponent$AccessibleJTextComponent = ::javax::swing::text::JTextComponent$AccessibleJTextComponent;
using $Segment = ::javax::swing::text::Segment;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _JTextComponent$AccessibleJTextComponent$IndexedSegment_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/JTextComponent$AccessibleJTextComponent;", nullptr, $FINAL | $SYNTHETIC, $field(JTextComponent$AccessibleJTextComponent$IndexedSegment, this$1)},
	{"modelOffset", "I", nullptr, $PUBLIC, $field(JTextComponent$AccessibleJTextComponent$IndexedSegment, modelOffset)},
	{}
};

$MethodInfo _JTextComponent$AccessibleJTextComponent$IndexedSegment_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/JTextComponent$AccessibleJTextComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(JTextComponent$AccessibleJTextComponent$IndexedSegment::*)($JTextComponent$AccessibleJTextComponent*)>(&JTextComponent$AccessibleJTextComponent$IndexedSegment::init$))},
	{}
};

$InnerClassInfo _JTextComponent$AccessibleJTextComponent$IndexedSegment_InnerClassesInfo_[] = {
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent", "javax.swing.text.JTextComponent", "AccessibleJTextComponent", $PUBLIC},
	{"javax.swing.text.JTextComponent$AccessibleJTextComponent$IndexedSegment", "javax.swing.text.JTextComponent$AccessibleJTextComponent", "IndexedSegment", $PRIVATE},
	{}
};

$ClassInfo _JTextComponent$AccessibleJTextComponent$IndexedSegment_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.JTextComponent$AccessibleJTextComponent$IndexedSegment",
	"javax.swing.text.Segment",
	nullptr,
	_JTextComponent$AccessibleJTextComponent$IndexedSegment_FieldInfo_,
	_JTextComponent$AccessibleJTextComponent$IndexedSegment_MethodInfo_,
	nullptr,
	nullptr,
	_JTextComponent$AccessibleJTextComponent$IndexedSegment_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.JTextComponent"
};

$Object* allocate$JTextComponent$AccessibleJTextComponent$IndexedSegment($Class* clazz) {
	return $of($alloc(JTextComponent$AccessibleJTextComponent$IndexedSegment));
}

void JTextComponent$AccessibleJTextComponent$IndexedSegment::init$($JTextComponent$AccessibleJTextComponent* this$1) {
	$set(this, this$1, this$1);
	$Segment::init$();
}

JTextComponent$AccessibleJTextComponent$IndexedSegment::JTextComponent$AccessibleJTextComponent$IndexedSegment() {
}

$Class* JTextComponent$AccessibleJTextComponent$IndexedSegment::load$($String* name, bool initialize) {
	$loadClass(JTextComponent$AccessibleJTextComponent$IndexedSegment, name, initialize, &_JTextComponent$AccessibleJTextComponent$IndexedSegment_ClassInfo_, allocate$JTextComponent$AccessibleJTextComponent$IndexedSegment);
	return class$;
}

$Class* JTextComponent$AccessibleJTextComponent$IndexedSegment::class$ = nullptr;

		} // text
	} // swing
} // javax