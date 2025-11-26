#include <javax/swing/plaf/basic/BasicTextUI$RootView.h>

#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/lang/Error.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/plaf/basic/BasicTextUI.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/EditorKit.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $BasicTextUI = ::javax::swing::plaf::basic::BasicTextUI;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $EditorKit = ::javax::swing::text::EditorKit;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTextUI$RootView_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTextUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTextUI$RootView, this$0)},
	{"view", "Ljavax/swing/text/View;", nullptr, $PRIVATE, $field(BasicTextUI$RootView, view)},
	{}
};

$MethodInfo _BasicTextUI$RootView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTextUI;)V", nullptr, 0, $method(static_cast<void(BasicTextUI$RootView::*)($BasicTextUI*)>(&BasicTextUI$RootView::init$))},
	{"breakView", "(IFLjava/awt/Shape;)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"getAlignment", "(I)F", nullptr, $PUBLIC},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getChildAllocation", "(ILjava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC},
	{"getContainer", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getDocument", "()Ljavax/swing/text/Document;", nullptr, $PUBLIC},
	{"getElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getMaximumSpan", "(I)F", nullptr, $PUBLIC},
	{"getMinimumSpan", "(I)F", nullptr, $PUBLIC},
	{"getNextVisualPositionFrom", "(ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;I[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"getPreferredSpan", "(I)F", nullptr, $PUBLIC},
	{"getResizeWeight", "(I)I", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"getView", "(I)Ljavax/swing/text/View;", nullptr, $PUBLIC},
	{"getViewCount", "()I", nullptr, $PUBLIC},
	{"getViewFactory", "()Ljavax/swing/text/ViewFactory;", nullptr, $PUBLIC},
	{"getViewIndex", "(ILjavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"modelToView", "(ILjavax/swing/text/Position$Bias;ILjavax/swing/text/Position$Bias;Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"preferenceChanged", "(Ljavax/swing/text/View;ZZ)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"setParent", "(Ljavax/swing/text/View;)V", nullptr, $PUBLIC},
	{"setSize", "(FF)V", nullptr, $PUBLIC},
	{"setView", "(Ljavax/swing/text/View;)V", nullptr, 0},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTextUI$RootView_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTextUI$RootView", "javax.swing.plaf.basic.BasicTextUI", "RootView", 0},
	{}
};

$ClassInfo _BasicTextUI$RootView_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTextUI$RootView",
	"javax.swing.text.View",
	nullptr,
	_BasicTextUI$RootView_FieldInfo_,
	_BasicTextUI$RootView_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTextUI$RootView_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTextUI"
};

$Object* allocate$BasicTextUI$RootView($Class* clazz) {
	return $of($alloc(BasicTextUI$RootView));
}

void BasicTextUI$RootView::init$($BasicTextUI* this$0) {
	$set(this, this$0, this$0);
	$View::init$(nullptr);
}

void BasicTextUI$RootView::setView($View* v) {
	$var($View, oldView, this->view);
	$set(this, view, nullptr);
	if (oldView != nullptr) {
		oldView->setParent(nullptr);
	}
	if (v != nullptr) {
		v->setParent(this);
	}
	$set(this, view, v);
}

$AttributeSet* BasicTextUI$RootView::getAttributes() {
	return nullptr;
}

float BasicTextUI$RootView::getPreferredSpan(int32_t axis) {
	if (this->view != nullptr) {
		return $nc(this->view)->getPreferredSpan(axis);
	}
	return (float)10;
}

float BasicTextUI$RootView::getMinimumSpan(int32_t axis) {
	if (this->view != nullptr) {
		return $nc(this->view)->getMinimumSpan(axis);
	}
	return (float)10;
}

float BasicTextUI$RootView::getMaximumSpan(int32_t axis) {
	return (float)$Integer::MAX_VALUE;
}

void BasicTextUI$RootView::preferenceChanged($View* child, bool width, bool height) {
	$nc(this->this$0->editor)->revalidate();
}

float BasicTextUI$RootView::getAlignment(int32_t axis) {
	if (this->view != nullptr) {
		return $nc(this->view)->getAlignment(axis);
	}
	return (float)0;
}

void BasicTextUI$RootView::paint($Graphics* g, $Shape* allocation) {
	if (this->view != nullptr) {
		$var($Rectangle, alloc, ($instanceOf($Rectangle, allocation)) ? $cast($Rectangle, allocation) : $nc(allocation)->getBounds());
		setSize((float)$nc(alloc)->width, (float)alloc->height);
		$nc(this->view)->paint(g, allocation);
	}
}

void BasicTextUI$RootView::setParent($View* parent) {
	$throwNew($Error, "Can\'t set parent on root view"_s);
}

int32_t BasicTextUI$RootView::getViewCount() {
	return 1;
}

$View* BasicTextUI$RootView::getView(int32_t n) {
	return this->view;
}

int32_t BasicTextUI$RootView::getViewIndex(int32_t pos, $Position$Bias* b) {
	return 0;
}

$Shape* BasicTextUI$RootView::getChildAllocation(int32_t index, $Shape* a) {
	return a;
}

$Shape* BasicTextUI$RootView::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	if (this->view != nullptr) {
		return $nc(this->view)->modelToView(pos, a, b);
	}
	return nullptr;
}

$Shape* BasicTextUI$RootView::modelToView(int32_t p0, $Position$Bias* b0, int32_t p1, $Position$Bias* b1, $Shape* a) {
	if (this->view != nullptr) {
		return $nc(this->view)->modelToView(p0, b0, p1, b1, a);
	}
	return nullptr;
}

int32_t BasicTextUI$RootView::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	if (this->view != nullptr) {
		int32_t retValue = $nc(this->view)->viewToModel(x, y, a, bias);
		return retValue;
	}
	return -1;
}

int32_t BasicTextUI$RootView::getNextVisualPositionFrom(int32_t pos, $Position$Bias* b, $Shape* a, int32_t direction, $Position$BiasArray* biasRet) {
	if (pos < -1 || pos > $nc($(getDocument()))->getLength()) {
		$throwNew($BadLocationException, "invalid position"_s, pos);
	}
	if (this->view != nullptr) {
		int32_t nextPos = $nc(this->view)->getNextVisualPositionFrom(pos, b, a, direction, biasRet);
		if (nextPos != -1) {
			pos = nextPos;
		} else {
			$nc(biasRet)->set(0, b);
		}
	}
	return pos;
}

void BasicTextUI$RootView::insertUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	if (this->view != nullptr) {
		$nc(this->view)->insertUpdate(e, a, f);
	}
}

void BasicTextUI$RootView::removeUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	if (this->view != nullptr) {
		$nc(this->view)->removeUpdate(e, a, f);
	}
}

void BasicTextUI$RootView::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	if (this->view != nullptr) {
		$nc(this->view)->changedUpdate(e, a, f);
	}
}

$Document* BasicTextUI$RootView::getDocument() {
	return $nc(this->this$0->editor)->getDocument();
}

int32_t BasicTextUI$RootView::getStartOffset() {
	if (this->view != nullptr) {
		return $nc(this->view)->getStartOffset();
	}
	return $nc($(getElement()))->getStartOffset();
}

int32_t BasicTextUI$RootView::getEndOffset() {
	if (this->view != nullptr) {
		return $nc(this->view)->getEndOffset();
	}
	return $nc($(getElement()))->getEndOffset();
}

$Element* BasicTextUI$RootView::getElement() {
	if (this->view != nullptr) {
		return $nc(this->view)->getElement();
	}
	return $nc($($nc(this->this$0->editor)->getDocument()))->getDefaultRootElement();
}

$View* BasicTextUI$RootView::breakView(int32_t axis, float len, $Shape* a) {
	$throwNew($Error, "Can\'t break root view"_s);
	$shouldNotReachHere();
}

int32_t BasicTextUI$RootView::getResizeWeight(int32_t axis) {
	if (this->view != nullptr) {
		return $nc(this->view)->getResizeWeight(axis);
	}
	return 0;
}

void BasicTextUI$RootView::setSize(float width, float height) {
	if (this->view != nullptr) {
		$nc(this->view)->setSize(width, height);
	}
}

$Container* BasicTextUI$RootView::getContainer() {
	return this->this$0->editor;
}

$ViewFactory* BasicTextUI$RootView::getViewFactory() {
	$useLocalCurrentObjectStackCache();
	$var($EditorKit, kit, this->this$0->getEditorKit(this->this$0->editor));
	$var($ViewFactory, f, $nc(kit)->getViewFactory());
	if (f != nullptr) {
		return f;
	}
	return this->this$0;
}

BasicTextUI$RootView::BasicTextUI$RootView() {
}

$Class* BasicTextUI$RootView::load$($String* name, bool initialize) {
	$loadClass(BasicTextUI$RootView, name, initialize, &_BasicTextUI$RootView_ClassInfo_, allocate$BasicTextUI$RootView);
	return class$;
}

$Class* BasicTextUI$RootView::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax