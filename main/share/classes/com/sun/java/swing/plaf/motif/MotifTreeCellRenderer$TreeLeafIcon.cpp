#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer$TreeLeafIcon.h>

#include <com/sun/java/swing/plaf/motif/MotifTreeCellRenderer.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $MotifTreeCellRenderer = ::com::sun::java::swing::plaf::motif::MotifTreeCellRenderer;
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

$FieldInfo _MotifTreeCellRenderer$TreeLeafIcon_FieldInfo_[] = {
	{"bg", "Ljava/awt/Color;", nullptr, 0, $field(MotifTreeCellRenderer$TreeLeafIcon, bg)},
	{"shadow", "Ljava/awt/Color;", nullptr, 0, $field(MotifTreeCellRenderer$TreeLeafIcon, shadow)},
	{"highlight", "Ljava/awt/Color;", nullptr, 0, $field(MotifTreeCellRenderer$TreeLeafIcon, highlight)},
	{}
};

$MethodInfo _MotifTreeCellRenderer$TreeLeafIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifTreeCellRenderer$TreeLeafIcon::*)()>(&MotifTreeCellRenderer$TreeLeafIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MotifTreeCellRenderer$TreeLeafIcon_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer$TreeLeafIcon", "com.sun.java.swing.plaf.motif.MotifTreeCellRenderer", "TreeLeafIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MotifTreeCellRenderer$TreeLeafIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer$TreeLeafIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	_MotifTreeCellRenderer$TreeLeafIcon_FieldInfo_,
	_MotifTreeCellRenderer$TreeLeafIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MotifTreeCellRenderer$TreeLeafIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifTreeCellRenderer"
};

$Object* allocate$MotifTreeCellRenderer$TreeLeafIcon($Class* clazz) {
	return $of($alloc(MotifTreeCellRenderer$TreeLeafIcon));
}

int32_t MotifTreeCellRenderer$TreeLeafIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MotifTreeCellRenderer$TreeLeafIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MotifTreeCellRenderer$TreeLeafIcon::clone() {
	 return this->$Icon::clone();
}

$String* MotifTreeCellRenderer$TreeLeafIcon::toString() {
	 return this->$Icon::toString();
}

void MotifTreeCellRenderer$TreeLeafIcon::finalize() {
	this->$Icon::finalize();
}

void MotifTreeCellRenderer$TreeLeafIcon::init$() {
	$set(this, bg, $UIManager::getColor("Tree.iconBackground"_s));
	$set(this, shadow, $UIManager::getColor("Tree.iconShadow"_s));
	$set(this, highlight, $UIManager::getColor("Tree.iconHighlight"_s));
}

void MotifTreeCellRenderer$TreeLeafIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc(g)->setColor(this->bg);
	y -= 3;
	g->fillRect(x + 4, y + 7, 5, 5);
	g->drawLine(x + 6, y + 6, x + 6, y + 6);
	g->drawLine(x + 3, y + 9, x + 3, y + 9);
	g->drawLine(x + 6, y + 12, x + 6, y + 12);
	g->drawLine(x + 9, y + 9, x + 9, y + 9);
	g->setColor(this->highlight);
	g->drawLine(x + 2, y + 9, x + 5, y + 6);
	g->drawLine(x + 3, y + 10, x + 5, y + 12);
	g->setColor(this->shadow);
	g->drawLine(x + 6, y + 13, x + 10, y + 9);
	g->drawLine(x + 9, y + 8, x + 7, y + 6);
}

int32_t MotifTreeCellRenderer$TreeLeafIcon::getIconWidth() {
	return 13;
}

int32_t MotifTreeCellRenderer$TreeLeafIcon::getIconHeight() {
	return 13;
}

MotifTreeCellRenderer$TreeLeafIcon::MotifTreeCellRenderer$TreeLeafIcon() {
}

$Class* MotifTreeCellRenderer$TreeLeafIcon::load$($String* name, bool initialize) {
	$loadClass(MotifTreeCellRenderer$TreeLeafIcon, name, initialize, &_MotifTreeCellRenderer$TreeLeafIcon_ClassInfo_, allocate$MotifTreeCellRenderer$TreeLeafIcon);
	return class$;
}

$Class* MotifTreeCellRenderer$TreeLeafIcon::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com