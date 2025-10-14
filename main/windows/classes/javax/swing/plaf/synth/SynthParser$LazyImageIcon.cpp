#include <javax/swing/plaf/synth/SynthParser$LazyImageIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Toolkit.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/plaf/synth/SynthParser.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ImageIcon = ::javax::swing::ImageIcon;
using $UIResource = ::javax::swing::plaf::UIResource;
using $SynthParser = ::javax::swing::plaf::synth::SynthParser;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthParser$LazyImageIcon_FieldInfo_[] = {
	{"location", "Ljava/net/URL;", nullptr, $PRIVATE, $field(SynthParser$LazyImageIcon, location)},
	{}
};

$MethodInfo _SynthParser$LazyImageIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/net/URL;)V", nullptr, $PUBLIC, $method(static_cast<void(SynthParser$LazyImageIcon::*)($URL*)>(&SynthParser$LazyImageIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"getImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthParser$LazyImageIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthParser$LazyImageIcon", "javax.swing.plaf.synth.SynthParser", "LazyImageIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SynthParser$LazyImageIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthParser$LazyImageIcon",
	"javax.swing.ImageIcon",
	"javax.swing.plaf.UIResource",
	_SynthParser$LazyImageIcon_FieldInfo_,
	_SynthParser$LazyImageIcon_MethodInfo_,
	nullptr,
	nullptr,
	_SynthParser$LazyImageIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthParser"
};

$Object* allocate$SynthParser$LazyImageIcon($Class* clazz) {
	return $of($alloc(SynthParser$LazyImageIcon));
}

$String* SynthParser$LazyImageIcon::toString() {
	 return this->$ImageIcon::toString();
}

int32_t SynthParser$LazyImageIcon::hashCode() {
	 return this->$ImageIcon::hashCode();
}

bool SynthParser$LazyImageIcon::equals(Object$* arg0) {
	 return this->$ImageIcon::equals(arg0);
}

$Object* SynthParser$LazyImageIcon::clone() {
	 return this->$ImageIcon::clone();
}

void SynthParser$LazyImageIcon::finalize() {
	this->$ImageIcon::finalize();
}

void SynthParser$LazyImageIcon::init$($URL* location) {
	$ImageIcon::init$();
	$set(this, location, location);
}

void SynthParser$LazyImageIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	if (getImage() != nullptr) {
		$ImageIcon::paintIcon(c, g, x, y);
	}
}

int32_t SynthParser$LazyImageIcon::getIconWidth() {
	if (getImage() != nullptr) {
		return $ImageIcon::getIconWidth();
	}
	return 0;
}

int32_t SynthParser$LazyImageIcon::getIconHeight() {
	if (getImage() != nullptr) {
		return $ImageIcon::getIconHeight();
	}
	return 0;
}

$Image* SynthParser$LazyImageIcon::getImage() {
	if (this->location != nullptr) {
		setImage($($nc($($Toolkit::getDefaultToolkit()))->getImage(this->location)));
		$set(this, location, nullptr);
	}
	return $ImageIcon::getImage();
}

SynthParser$LazyImageIcon::SynthParser$LazyImageIcon() {
}

$Class* SynthParser$LazyImageIcon::load$($String* name, bool initialize) {
	$loadClass(SynthParser$LazyImageIcon, name, initialize, &_SynthParser$LazyImageIcon_ClassInfo_, allocate$SynthParser$LazyImageIcon);
	return class$;
}

$Class* SynthParser$LazyImageIcon::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax