#include <javax/swing/plaf/metal/MetalFileChooserUI$IndentIcon.h>

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
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalFileChooserUI$IndentIcon_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$IndentIcon, this$0)},
	{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(MetalFileChooserUI$IndentIcon, icon)},
	{"depth", "I", nullptr, 0, $field(MetalFileChooserUI$IndentIcon, depth)},
	{}
};

$MethodInfo _MetalFileChooserUI$IndentIcon_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(static_cast<void(MetalFileChooserUI$IndentIcon::*)($MetalFileChooserUI*)>(&MetalFileChooserUI$IndentIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalFileChooserUI$IndentIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalFileChooserUI$IndentIcon", "javax.swing.plaf.metal.MetalFileChooserUI", "IndentIcon", 0},
	{}
};

$ClassInfo _MetalFileChooserUI$IndentIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalFileChooserUI$IndentIcon",
	"java.lang.Object",
	"javax.swing.Icon",
	_MetalFileChooserUI$IndentIcon_FieldInfo_,
	_MetalFileChooserUI$IndentIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalFileChooserUI$IndentIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalFileChooserUI"
};

$Object* allocate$MetalFileChooserUI$IndentIcon($Class* clazz) {
	return $of($alloc(MetalFileChooserUI$IndentIcon));
}

void MetalFileChooserUI$IndentIcon::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$set(this, icon, nullptr);
	this->depth = 0;
}

void MetalFileChooserUI$IndentIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	if ($nc($($nc(c)->getComponentOrientation()))->isLeftToRight()) {
		$nc(this->icon)->paintIcon(c, g, x + this->depth * 10, y);
	} else {
		$nc(this->icon)->paintIcon(c, g, x, y);
	}
}

int32_t MetalFileChooserUI$IndentIcon::getIconWidth() {
	return $nc(this->icon)->getIconWidth() + this->depth * 10;
}

int32_t MetalFileChooserUI$IndentIcon::getIconHeight() {
	return $nc(this->icon)->getIconHeight();
}

MetalFileChooserUI$IndentIcon::MetalFileChooserUI$IndentIcon() {
}

$Class* MetalFileChooserUI$IndentIcon::load$($String* name, bool initialize) {
	$loadClass(MetalFileChooserUI$IndentIcon, name, initialize, &_MetalFileChooserUI$IndentIcon_ClassInfo_, allocate$MetalFileChooserUI$IndentIcon);
	return class$;
}

$Class* MetalFileChooserUI$IndentIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax