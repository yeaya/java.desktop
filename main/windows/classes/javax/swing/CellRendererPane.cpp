#include <javax/swing/CellRendererPane.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/io/ObjectOutputStream.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/CellRendererPane$AccessibleCellRendererPane.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $CellRendererPane$AccessibleCellRendererPane = ::javax::swing::CellRendererPane$AccessibleCellRendererPane;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$FieldInfo _CellRendererPane_FieldInfo_[] = {
	{"accessibleContext", "Ljavax/accessibility/AccessibleContext;", nullptr, $PROTECTED, $field(CellRendererPane, accessibleContext)},
	{}
};

$MethodInfo _CellRendererPane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CellRendererPane::*)()>(&CellRendererPane::init$))},
	{"addImpl", "(Ljava/awt/Component;Ljava/lang/Object;I)V", nullptr, $PROTECTED},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"invalidate", "()V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Container;IIIIZ)V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Container;IIII)V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;Ljava/awt/Component;Ljava/awt/Container;Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"update", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CellRendererPane::*)($ObjectOutputStream*)>(&CellRendererPane::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _CellRendererPane_InnerClassesInfo_[] = {
	{"javax.swing.CellRendererPane$AccessibleCellRendererPane", "javax.swing.CellRendererPane", "AccessibleCellRendererPane", $PROTECTED},
	{}
};

$ClassInfo _CellRendererPane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.CellRendererPane",
	"java.awt.Container",
	"javax.accessibility.Accessible",
	_CellRendererPane_FieldInfo_,
	_CellRendererPane_MethodInfo_,
	nullptr,
	nullptr,
	_CellRendererPane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.CellRendererPane$AccessibleCellRendererPane"
};

$Object* allocate$CellRendererPane($Class* clazz) {
	return $of($alloc(CellRendererPane));
}

$String* CellRendererPane::toString() {
	 return this->$Container::toString();
}

int32_t CellRendererPane::hashCode() {
	 return this->$Container::hashCode();
}

bool CellRendererPane::equals(Object$* arg0) {
	 return this->$Container::equals(arg0);
}

$Object* CellRendererPane::clone() {
	 return this->$Container::clone();
}

void CellRendererPane::finalize() {
	this->$Container::finalize();
}

void CellRendererPane::init$() {
	$Container::init$();
	$set(this, accessibleContext, nullptr);
	setLayout(nullptr);
	setVisible(false);
}

void CellRendererPane::invalidate() {
}

void CellRendererPane::paint($Graphics* g) {
}

void CellRendererPane::update($Graphics* g) {
}

void CellRendererPane::addImpl($Component* x, Object$* constraints, int32_t index) {
	if ($equals($nc(x)->getParent(), this)) {
		return;
	} else {
		$Container::addImpl(x, constraints, index);
	}
}

void CellRendererPane::paintComponent($Graphics* g, $Component* c, $Container* p, int32_t x, int32_t y, int32_t w, int32_t h, bool shouldValidate) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		if (p != nullptr) {
			$var($Color, oldColor, $nc(g)->getColor());
			g->setColor($(p->getBackground()));
			g->fillRect(x, y, w, h);
			g->setColor(oldColor);
		}
		return;
	}
	if (!$equals($nc(c)->getParent(), this)) {
		this->add(c);
	}
	$nc(c)->setBounds(x, y, w, h);
	if (shouldValidate) {
		c->validate();
	}
	bool wasDoubleBuffered = false;
	if (($instanceOf($JComponent, c)) && $nc(($cast($JComponent, c)))->isDoubleBuffered()) {
		wasDoubleBuffered = true;
		($cast($JComponent, c))->setDoubleBuffered(false);
	}
	$var($Graphics, cg, $nc(g)->create(x, y, w, h));
	{
		$var($Throwable, var$0, nullptr);
		try {
			c->paint(cg);
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(cg)->dispose();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	if (wasDoubleBuffered && ($instanceOf($JComponent, c))) {
		$nc(($cast($JComponent, c)))->setDoubleBuffered(true);
	}
	c->setBounds(-w, -h, 0, 0);
}

void CellRendererPane::paintComponent($Graphics* g, $Component* c, $Container* p, int32_t x, int32_t y, int32_t w, int32_t h) {
	paintComponent(g, c, p, x, y, w, h, false);
}

void CellRendererPane::paintComponent($Graphics* g, $Component* c, $Container* p, $Rectangle* r) {
	paintComponent(g, c, p, $nc(r)->x, r->y, r->width, r->height);
}

void CellRendererPane::writeObject($ObjectOutputStream* s) {
	removeAll();
	$nc(s)->defaultWriteObject();
}

$AccessibleContext* CellRendererPane::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($CellRendererPane$AccessibleCellRendererPane, this));
	}
	return this->accessibleContext;
}

CellRendererPane::CellRendererPane() {
}

$Class* CellRendererPane::load$($String* name, bool initialize) {
	$loadClass(CellRendererPane, name, initialize, &_CellRendererPane_ClassInfo_, allocate$CellRendererPane);
	return class$;
}

$Class* CellRendererPane::class$ = nullptr;

	} // swing
} // javax