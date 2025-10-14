#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$IndentIcon.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$IndentIcon_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$IndentIcon, this$0)},
	{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(SynthFileChooserUIImpl$IndentIcon, icon)},
	{"depth", "I", nullptr, 0, $field(SynthFileChooserUIImpl$IndentIcon, depth)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$IndentIcon_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUIImpl$IndentIcon::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$IndentIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUIImpl$IndentIcon_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$IndentIcon", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "IndentIcon", 0},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$IndentIcon_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$IndentIcon",
	"java.lang.Object",
	"javax.swing.Icon",
	_SynthFileChooserUIImpl$IndentIcon_FieldInfo_,
	_SynthFileChooserUIImpl$IndentIcon_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUIImpl$IndentIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$IndentIcon($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$IndentIcon));
}

void SynthFileChooserUIImpl$IndentIcon::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, icon, nullptr);
	this->depth = 0;
}

void SynthFileChooserUIImpl$IndentIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	if (this->icon != nullptr) {
		if ($nc($($nc(c)->getComponentOrientation()))->isLeftToRight()) {
			$nc(this->icon)->paintIcon(c, g, x + this->depth * 10, y);
		} else {
			$nc(this->icon)->paintIcon(c, g, x, y);
		}
	}
}

int32_t SynthFileChooserUIImpl$IndentIcon::getIconWidth() {
	return ((this->icon != nullptr) ? $nc(this->icon)->getIconWidth() : 0) + this->depth * 10;
}

int32_t SynthFileChooserUIImpl$IndentIcon::getIconHeight() {
	return (this->icon != nullptr) ? $nc(this->icon)->getIconHeight() : 0;
}

SynthFileChooserUIImpl$IndentIcon::SynthFileChooserUIImpl$IndentIcon() {
}

$Class* SynthFileChooserUIImpl$IndentIcon::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$IndentIcon, name, initialize, &_SynthFileChooserUIImpl$IndentIcon_ClassInfo_, allocate$SynthFileChooserUIImpl$IndentIcon);
	return class$;
}

$Class* SynthFileChooserUIImpl$IndentIcon::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun