#include <javax/swing/plaf/metal/MetalFileChooserUI$AlignedLabel.h>

#include <java/awt/Dimension.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

#undef LEFT_ALIGNMENT

using $MetalFileChooserUI$AlignedLabelArray = $Array<::javax::swing::plaf::metal::MetalFileChooserUI$AlignedLabel>;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$AlignedLabel_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$AlignedLabel, this$0)},
	{"group", "[Ljavax/swing/plaf/metal/MetalFileChooserUI$AlignedLabel;", nullptr, $PRIVATE, $field(MetalFileChooserUI$AlignedLabel, group)},
	{"maxWidth", "I", nullptr, $PRIVATE, $field(MetalFileChooserUI$AlignedLabel, maxWidth)},
	{}
};

$MethodInfo _MetalFileChooserUI$AlignedLabel_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$AlignedLabel::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$AlignedLabel::init$))},
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$AlignedLabel::*)($MetalFileChooserUI*,$String*)>(&MetalFileChooserUI$AlignedLabel::init$))},
	{"getMaxWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(MetalFileChooserUI$AlignedLabel::*)()>(&MetalFileChooserUI$AlignedLabel::getMaxWidth))},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSuperPreferredWidth", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(MetalFileChooserUI$AlignedLabel::*)()>(&MetalFileChooserUI$AlignedLabel::getSuperPreferredWidth))},
	{}
};

$InnerClassInfo _MetalFileChooserUI$AlignedLabel_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$AlignedLabel", "javax.swing.plaf.metal.MetalFileChooserUI", "AlignedLabel", $PRIVATE},
	{}
};

$ClassInfo _MetalFileChooserUI$AlignedLabel_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$AlignedLabel",
	"javax.swing.JLabel",
	nullptr,
	_MetalFileChooserUI$AlignedLabel_FieldInfo_,
	_MetalFileChooserUI$AlignedLabel_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$AlignedLabel_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$AlignedLabel($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$AlignedLabel));
}

void MetalFileChooserUI$AlignedLabel::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JLabel::init$();
	this->maxWidth = 0;
	$init($JComponent);
	setAlignmentX($JComponent::LEFT_ALIGNMENT);
}

void MetalFileChooserUI$AlignedLabel::init$($MetalFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JLabel::init$(text);
	this->maxWidth = 0;
	$init($JComponent);
	setAlignmentX($JComponent::LEFT_ALIGNMENT);
}

$Dimension* MetalFileChooserUI$AlignedLabel::getPreferredSize() {
	$var($Dimension, d, $JLabel::getPreferredSize());
	return $new($Dimension, getMaxWidth() + 11, $nc(d)->height);
}

int32_t MetalFileChooserUI$AlignedLabel::getMaxWidth() {
	if (this->maxWidth == 0 && this->group != nullptr) {
		int32_t max = 0;
		for (int32_t i = 0; i < $nc(this->group)->length; ++i) {
			max = $Math::max($nc($nc(this->group)->get(i))->getSuperPreferredWidth(), max);
		}
		for (int32_t i = 0; i < $nc(this->group)->length; ++i) {
			$nc($nc(this->group)->get(i))->maxWidth = max;
		}
	}
	return this->maxWidth;
}

int32_t MetalFileChooserUI$AlignedLabel::getSuperPreferredWidth() {
	return $nc($($JLabel::getPreferredSize()))->width;
}

MetalFileChooserUI$AlignedLabel::MetalFileChooserUI$AlignedLabel() {
}

$Class* MetalFileChooserUI$AlignedLabel::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$AlignedLabel, name, initialize, &_MetalFileChooserUI$AlignedLabel_ClassInfo_, allocate$MetalFileChooserUI$AlignedLabel);
	return class$;
}

$Class* MetalFileChooserUI$AlignedLabel::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax