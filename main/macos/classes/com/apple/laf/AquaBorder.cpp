#include <com/apple/laf/AquaBorder.h>

#include <apple/laf/JRSUIConstants$AlignmentHorizontal.h>
#include <apple/laf/JRSUIConstants$AlignmentVertical.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/lang/reflect/Constructor.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef CENTER
#undef REGULAR

using $JRSUIConstants$AlignmentHorizontal = ::apple::laf::JRSUIConstants$AlignmentHorizontal;
using $JRSUIConstants$AlignmentVertical = ::apple::laf::JRSUIConstants$AlignmentVertical;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $JComponent = ::javax::swing::JComponent;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JViewport = ::javax::swing::JViewport;
using $Border = ::javax::swing::border::Border;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaBorder_FieldInfo_[] = {
	{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;", $PROTECTED | $FINAL, $field(AquaBorder, painter)},
	{"sizeDescriptor", "Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;", nullptr, $PROTECTED | $FINAL, $field(AquaBorder, sizeDescriptor)},
	{"sizeVariant", "Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PROTECTED, $field(AquaBorder, sizeVariant)},
	{}
};

$MethodInfo _AquaBorder_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaBorder::*)($AquaUtilControlSize$SizeDescriptor*)>(&AquaBorder::init$))},
	{"<init>", "(Lcom/apple/laf/AquaBorder;)V", nullptr, $PROTECTED, $method(static_cast<void(AquaBorder::*)(AquaBorder*)>(&AquaBorder::init$))},
	{"createPainter", "()Lcom/apple/laf/AquaPainter;", "()Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;", $PROTECTED},
	{"deriveBorderForSize", "(Lapple/laf/JRSUIConstants$Size;)Lcom/apple/laf/AquaBorder;", nullptr, $PROTECTED},
	{"getBorderInsets", "(Ljava/awt/Component;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"isFocused", "(Ljava/awt/Component;)Z", nullptr, $PROTECTED},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"repaintBorder", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($JComponent*)>(&AquaBorder::repaintBorder))},
	{"setSize", "(Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaBorder_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaBorder$Default", "com.apple.laf.AquaBorder", "Default", $STATIC},
	{}
};

$ClassInfo _AquaBorder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaBorder",
	"java.lang.Object",
	"javax.swing.border.Border,javax.swing.plaf.UIResource",
	_AquaBorder_FieldInfo_,
	_AquaBorder_MethodInfo_,
	nullptr,
	nullptr,
	_AquaBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaBorder$Default"
};

$Object* allocate$AquaBorder($Class* clazz) {
	return $of($alloc(AquaBorder));
}

int32_t AquaBorder::hashCode() {
	 return this->$Border::hashCode();
}

bool AquaBorder::equals(Object$* arg0) {
	 return this->$Border::equals(arg0);
}

$Object* AquaBorder::clone() {
	 return this->$Border::clone();
}

$String* AquaBorder::toString() {
	 return this->$Border::toString();
}

void AquaBorder::finalize() {
	this->$Border::finalize();
}

void AquaBorder::init$($AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$set(this, sizeDescriptor, sizeDescriptor);
	$init($JRSUIConstants$Size);
	$set(this, sizeVariant, $nc(sizeDescriptor)->get($JRSUIConstants$Size::REGULAR));
	$set(this, painter, createPainter());
}

$AquaPainter* AquaBorder::createPainter() {
	$useLocalCurrentObjectStackCache();
	$var($AquaPainter, painter, $AquaPainter::create($($JRSUIState::getInstance())));
	$init($JRSUIConstants$AlignmentVertical);
	$nc($nc(painter)->state)->set($JRSUIConstants$AlignmentVertical::CENTER);
	$init($JRSUIConstants$AlignmentHorizontal);
	$nc(painter->state)->set($JRSUIConstants$AlignmentHorizontal::CENTER);
	return painter;
}

void AquaBorder::init$(AquaBorder* other) {
	$set(this, sizeDescriptor, $nc(other)->sizeDescriptor);
	$set(this, sizeVariant, other->sizeVariant);
	$set(this, painter, $AquaPainter::create($($nc($nc(other->painter)->state)->derive())));
	$init($JRSUIConstants$AlignmentVertical);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentVertical::CENTER);
	$init($JRSUIConstants$AlignmentHorizontal);
	$nc($nc(this->painter)->state)->set($JRSUIConstants$AlignmentHorizontal::CENTER);
}

void AquaBorder::setSize($JRSUIConstants$Size* size) {
	$set(this, sizeVariant, $nc(this->sizeDescriptor)->get(size));
	$nc($nc(this->painter)->state)->set(size);
}

$Insets* AquaBorder::getBorderInsets($Component* c) {
	return $cast($Insets, $nc($nc(this->sizeVariant)->margins)->clone());
}

AquaBorder* AquaBorder::deriveBorderForSize($JRSUIConstants$Size* size) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* clazz = $of(this)->getClass();
		$var(AquaBorder, border, $cast(AquaBorder, $nc($($nc(clazz)->getConstructor($$new($ClassArray, {clazz}))))->newInstance($$new($ObjectArray, {$of(this)}))));
		$nc(border)->setSize(size);
		return border;
	} catch ($Throwable& e) {
		return nullptr;
	}
	$shouldNotReachHere();
}

void AquaBorder::repaintBorder($JComponent* c) {
	$init(AquaBorder);
	$useLocalCurrentObjectStackCache();
	$var($JComponent, borderedComponent, c);
	$var($Border, border, $nc(c)->getBorder());
	if (border == nullptr) {
		$var($Container, p, c->getParent());
		if ($instanceOf($JViewport, p)) {
			$assign(borderedComponent, $cast($JComponent, $nc(p)->getParent()));
			if (borderedComponent != nullptr) {
				$assign(border, borderedComponent->getBorder());
			}
		}
	}
	if (border == nullptr || borderedComponent == nullptr) {
		return;
	}
	int32_t width = $nc(borderedComponent)->getWidth();
	int32_t height = borderedComponent->getHeight();
	$var($Insets, i, borderedComponent->getInsets());
	borderedComponent->repaint(0, 0, width, $nc(i)->top);
	borderedComponent->repaint(0, 0, $nc(i)->left, height);
	borderedComponent->repaint(0, height - $nc(i)->bottom, width, i->bottom);
	borderedComponent->repaint(width - $nc(i)->right, 0, i->right, height);
}

bool AquaBorder::isFocused($Component* c) {
	$useLocalCurrentObjectStackCache();
	$var($Component, focusable, c);
	if ($instanceOf($JScrollPane, c)) {
		$var($JViewport, vp, $nc(($cast($JScrollPane, c)))->getViewport());
		if (vp != nullptr) {
			$assign(focusable, vp->getView());
			if ($instanceOf($JTextComponent, focusable)) {
				return false;
			}
		}
	} else if ($instanceOf($JTextComponent, focusable)) {
		if (!$nc(($cast($JTextComponent, focusable)))->isEditable()) {
			return false;
		}
	}
	return (focusable != nullptr && $instanceOf($JComponent, focusable) && $nc(($cast($JComponent, focusable)))->hasFocus());
}

bool AquaBorder::isBorderOpaque() {
	return false;
}

void AquaBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(this->painter)->paint(g, c, x, y, w, h);
}

AquaBorder::AquaBorder() {
}

$Class* AquaBorder::load$($String* name, bool initialize) {
	$loadClass(AquaBorder, name, initialize, &_AquaBorder_ClassInfo_, allocate$AquaBorder);
	return class$;
}

$Class* AquaBorder::class$ = nullptr;

		} // laf
	} // apple
} // com