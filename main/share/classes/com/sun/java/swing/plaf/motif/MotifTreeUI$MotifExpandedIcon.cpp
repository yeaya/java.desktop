#include <com/sun/java/swing/plaf/motif/MotifTreeUI$MotifExpandedIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifTreeUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $MotifTreeUI = ::com::sun::java::swing::plaf::motif::MotifTreeUI;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $UIManager = ::javax::swing::UIManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifTreeUI$MotifExpandedIcon_FieldInfo_[] = {
	{"bg", "Ljava/awt/Color;", nullptr, $STATIC, $staticField(MotifTreeUI$MotifExpandedIcon, bg)},
	{"fg", "Ljava/awt/Color;", nullptr, $STATIC, $staticField(MotifTreeUI$MotifExpandedIcon, fg)},
	{"highlight", "Ljava/awt/Color;", nullptr, $STATIC, $staticField(MotifTreeUI$MotifExpandedIcon, highlight)},
	{"shadow", "Ljava/awt/Color;", nullptr, $STATIC, $staticField(MotifTreeUI$MotifExpandedIcon, shadow)},
	{}
};

$MethodInfo _MotifTreeUI$MotifExpandedIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTreeUI$MotifExpandedIcon::*)()>(&MotifTreeUI$MotifExpandedIcon::init$))},
	{"createExpandedIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MotifTreeUI$MotifExpandedIcon::createExpandedIcon))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifTreeUI$MotifExpandedIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon", "com.sun.java.swing.plaf.motif.MotifTreeUI", "MotifExpandedIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifTreeUI$MotifExpandedIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTreeUI$MotifExpandedIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_MotifTreeUI$MotifExpandedIcon_FieldInfo_,
	_MotifTreeUI$MotifExpandedIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifTreeUI$MotifExpandedIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifTreeUI"
};

$Object* allocate$MotifTreeUI$MotifExpandedIcon($Class* clazz) {
	return $of($alloc(MotifTreeUI$MotifExpandedIcon));
}

int32_t MotifTreeUI$MotifExpandedIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MotifTreeUI$MotifExpandedIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MotifTreeUI$MotifExpandedIcon::clone() {
	 return this->$Icon::clone();
}

$String* MotifTreeUI$MotifExpandedIcon::toString() {
	 return this->$Icon::toString();
}

void MotifTreeUI$MotifExpandedIcon::finalize() {
	this->$Icon::finalize();
}

$Color* MotifTreeUI$MotifExpandedIcon::bg = nullptr;
$Color* MotifTreeUI$MotifExpandedIcon::fg = nullptr;
$Color* MotifTreeUI$MotifExpandedIcon::highlight = nullptr;
$Color* MotifTreeUI$MotifExpandedIcon::shadow = nullptr;

void MotifTreeUI$MotifExpandedIcon::init$() {
	$assignStatic(MotifTreeUI$MotifExpandedIcon::bg, $UIManager::getColor("Tree.iconBackground"_s));
	$assignStatic(MotifTreeUI$MotifExpandedIcon::fg, $UIManager::getColor("Tree.iconForeground"_s));
	$assignStatic(MotifTreeUI$MotifExpandedIcon::highlight, $UIManager::getColor("Tree.iconHighlight"_s));
	$assignStatic(MotifTreeUI$MotifExpandedIcon::shadow, $UIManager::getColor("Tree.iconShadow"_s));
}

$Icon* MotifTreeUI$MotifExpandedIcon::createExpandedIcon() {
	$init(MotifTreeUI$MotifExpandedIcon);
	return $new(MotifTreeUI$MotifExpandedIcon);
}

void MotifTreeUI$MotifExpandedIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc(g)->setColor(MotifTreeUI$MotifExpandedIcon::highlight);
	g->drawLine(x, y, x + 14 - 1, y);
	g->drawLine(x, y + 1, x, y + 14 - 1);
	g->setColor(MotifTreeUI$MotifExpandedIcon::shadow);
	g->drawLine(x + 14 - 1, y + 1, x + 14 - 1, y + 14 - 1);
	g->drawLine(x + 1, y + 14 - 1, x + 14 - 1, y + 14 - 1);
	g->setColor(MotifTreeUI$MotifExpandedIcon::bg);
	g->fillRect(x + 1, y + 1, 14 - 2, 14 - 2);
	g->setColor(MotifTreeUI$MotifExpandedIcon::fg);
	g->drawLine(x + 3, y + 7 - 1, x + 14 - 4, y + 7 - 1);
	g->drawLine(x + 3, y + 7, x + 14 - 4, y + 7);
}

int32_t MotifTreeUI$MotifExpandedIcon::getIconWidth() {
	return 14;
}

int32_t MotifTreeUI$MotifExpandedIcon::getIconHeight() {
	return 14;
}

MotifTreeUI$MotifExpandedIcon::MotifTreeUI$MotifExpandedIcon() {
}

$Class* MotifTreeUI$MotifExpandedIcon::load$($String* name, bool initialize) {
	$loadClass(MotifTreeUI$MotifExpandedIcon, name, initialize, &_MotifTreeUI$MotifExpandedIcon_ClassInfo_, allocate$MotifTreeUI$MotifExpandedIcon);
	return class$;
}

$Class* MotifTreeUI$MotifExpandedIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com