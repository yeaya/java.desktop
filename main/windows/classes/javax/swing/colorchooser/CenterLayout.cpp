#include <javax/swing/colorchooser/CenterLayout.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {
		namespace colorchooser {

$MethodInfo _CenterLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CenterLayout::*)()>(&CenterLayout::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CenterLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.colorchooser.CenterLayout",
	"java.lang.Object",
	"java.awt.LayoutManager,java.io.Serializable",
	nullptr,
	_CenterLayout_MethodInfo_
};

$Object* allocate$CenterLayout($Class* clazz) {
	return $of($alloc(CenterLayout));
}

int32_t CenterLayout::hashCode() {
	 return this->$LayoutManager::hashCode();
}

bool CenterLayout::equals(Object$* arg0) {
	 return this->$LayoutManager::equals(arg0);
}

$Object* CenterLayout::clone() {
	 return this->$LayoutManager::clone();
}

$String* CenterLayout::toString() {
	 return this->$LayoutManager::toString();
}

void CenterLayout::finalize() {
	this->$LayoutManager::finalize();
}

void CenterLayout::init$() {
}

void CenterLayout::addLayoutComponent($String* name, $Component* comp) {
}

void CenterLayout::removeLayoutComponent($Component* comp) {
}

$Dimension* CenterLayout::preferredLayoutSize($Container* container) {
	$useLocalCurrentObjectStackCache();
	$var($Component, c, $nc(container)->getComponent(0));
	if (c != nullptr) {
		$var($Dimension, size, c->getPreferredSize());
		$var($Insets, insets, container->getInsets());
		$nc(size)->width += $nc(insets)->left + insets->right;
		size->height += insets->top + insets->bottom;
		return size;
	} else {
		return $new($Dimension, 0, 0);
	}
}

$Dimension* CenterLayout::minimumLayoutSize($Container* cont) {
	return preferredLayoutSize(cont);
}

void CenterLayout::layoutContainer($Container* container) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Component, c, $nc(container)->getComponent(0));
		$nc(c)->setSize($(c->getPreferredSize()));
		$var($Dimension, size, c->getSize());
		$var($Dimension, containerSize, container->getSize());
		$var($Insets, containerInsets, container->getInsets());
		$nc(containerSize)->width -= $nc(containerInsets)->left + containerInsets->right;
		containerSize->height -= containerInsets->top + containerInsets->bottom;
		int32_t componentLeft = (containerSize->width / 2) - ($nc(size)->width / 2);
		int32_t componentTop = (containerSize->height / 2) - (size->height / 2);
		componentLeft += containerInsets->left;
		componentTop += containerInsets->top;
		c->setBounds(componentLeft, componentTop, size->width, size->height);
	} catch ($Exception& e) {
	}
}

CenterLayout::CenterLayout() {
}

$Class* CenterLayout::load$($String* name, bool initialize) {
	$loadClass(CenterLayout, name, initialize, &_CenterLayout_ClassInfo_, allocate$CenterLayout);
	return class$;
}

$Class* CenterLayout::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax