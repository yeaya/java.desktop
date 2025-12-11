#include <java/awt/Panel.h>

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Panel$AccessibleAWTPanel.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/PanelPeer.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Panel$AccessibleAWTPanel = ::java::awt::Panel$AccessibleAWTPanel;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $ComponentFactory = ::sun::awt::ComponentFactory;

namespace java {
	namespace awt {

$FieldInfo _Panel_FieldInfo_[] = {
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Panel, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Panel, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Panel, serialVersionUID)},
	{}
};

$MethodInfo _Panel_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Panel::*)()>(&Panel::init$))},
	{"<init>", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $method(static_cast<void(Panel::*)($LayoutManager*)>(&Panel::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Panel_InnerClassesInfo_[] = {
	{"java.awt.Panel$AccessibleAWTPanel", "java.awt.Panel", "AccessibleAWTPanel", $PROTECTED},
	{}
};

$ClassInfo _Panel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Panel",
	"java.awt.Container",
	"javax.accessibility.Accessible",
	_Panel_FieldInfo_,
	_Panel_MethodInfo_,
	nullptr,
	nullptr,
	_Panel_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Panel$AccessibleAWTPanel"
};

$Object* allocate$Panel($Class* clazz) {
	return $of($alloc(Panel));
}

$String* Panel::toString() {
	 return this->$Container::toString();
}

int32_t Panel::hashCode() {
	 return this->$Container::hashCode();
}

bool Panel::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* Panel::clone() {
	 return this->$Container::clone();
}

void Panel::finalize() {
	this->$Container::finalize();
}

$String* Panel::base = nullptr;
int32_t Panel::nameCounter = 0;

void Panel::init$() {
	Panel::init$($$new($FlowLayout));
}

void Panel::init$($LayoutManager* layout) {
	$Container::init$();
	setLayout(layout);
}

$String* Panel::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Panel::class$) {
		$var($String, var$0, Panel::base);
		return $concat(var$0, $$str(Panel::nameCounter++));
	}
}

void Panel::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createPanel(this));
		}
		$Container::addNotify();
	}
}

$AccessibleContext* Panel::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Panel$AccessibleAWTPanel, this));
	}
	return this->accessibleContext;
}

void clinit$Panel($Class* class$) {
	$assignStatic(Panel::base, "panel"_s);
	Panel::nameCounter = 0;
}

Panel::Panel() {
}

$Class* Panel::load$($String* name, bool initialize) {
	$loadClass(Panel, name, initialize, &_Panel_ClassInfo_, clinit$Panel, allocate$Panel);
	return class$;
}

$Class* Panel::class$ = nullptr;

	} // awt
} // java