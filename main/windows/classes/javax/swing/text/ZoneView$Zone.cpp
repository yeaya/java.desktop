#include <javax/swing/text/ZoneView$Zone.h>

#include <java/awt/Graphics.h>
#include <java/awt/Shape.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AsyncBoxView.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/ZoneView.h>
#include <jcpp.h>

#undef X_AXIS
#undef Y_AXIS

using $ElementArray = $Array<::javax::swing::text::Element>;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $ViewArray = $Array<::javax::swing::text::View>;
using $Graphics = ::java::awt::Graphics;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $AsyncBoxView = ::javax::swing::text::AsyncBoxView;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $BoxView = ::javax::swing::text::BoxView;
using $Element = ::javax::swing::text::Element;
using $Position = ::javax::swing::text::Position;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $ZoneView = ::javax::swing::text::ZoneView;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ZoneView$Zone_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/ZoneView;", nullptr, $FINAL | $SYNTHETIC, $field(ZoneView$Zone, this$0)},
	{"start", "Ljavax/swing/text/Position;", nullptr, $PRIVATE, $field(ZoneView$Zone, start)},
	{"end", "Ljavax/swing/text/Position;", nullptr, $PRIVATE, $field(ZoneView$Zone, end)},
	{}
};

$MethodInfo _ZoneView$Zone_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/ZoneView;Ljavax/swing/text/Element;Ljavax/swing/text/Position;Ljavax/swing/text/Position;)V", nullptr, $PUBLIC, $method(static_cast<void(ZoneView$Zone::*)($ZoneView*,$Element*,$Position*,$Position*)>(&ZoneView$Zone::init$))},
	{"changedUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"flushRequirementChanges", "()V", nullptr, $PROTECTED},
	{"getAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC},
	{"getEndOffset", "()I", nullptr, $PUBLIC},
	{"getStartOffset", "()I", nullptr, $PUBLIC},
	{"getViewIndex", "(ILjavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"isLoaded", "()Z", nullptr, $PUBLIC},
	{"load", "()V", nullptr, $PUBLIC},
	{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"modelToView", "(ILjava/awt/Shape;Ljavax/swing/text/Position$Bias;)Ljava/awt/Shape;", nullptr, $PUBLIC, nullptr, "javax.swing.text.BadLocationException"},
	{"paint", "(Ljava/awt/Graphics;Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"unload", "()V", nullptr, $PUBLIC},
	{"updateChildren", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljavax/swing/text/ViewFactory;)Z", nullptr, $PROTECTED},
	{"viewToModel", "(FFLjava/awt/Shape;[Ljavax/swing/text/Position$Bias;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ZoneView$Zone_InnerClassesInfo_[] = {
	{"javax.swing.text.ZoneView$Zone", "javax.swing.text.ZoneView", "Zone", 0},
	{}
};

$ClassInfo _ZoneView$Zone_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.ZoneView$Zone",
	"javax.swing.text.AsyncBoxView",
	nullptr,
	_ZoneView$Zone_FieldInfo_,
	_ZoneView$Zone_MethodInfo_,
	nullptr,
	nullptr,
	_ZoneView$Zone_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.ZoneView"
};

$Object* allocate$ZoneView$Zone($Class* clazz) {
	return $of($alloc(ZoneView$Zone));
}

void ZoneView$Zone::init$($ZoneView* this$0, $Element* elem, $Position* start, $Position* end) {
	$set(this, this$0, this$0);
	$AsyncBoxView::init$(elem, this$0->getAxis());
	$set(this, start, start);
	$set(this, end, end);
}

void ZoneView$Zone::load() {
	$useLocalCurrentObjectStackCache();
	if (!isLoaded()) {
		setEstimatedMajorSpan(true);
		$var($Element, e, getElement());
		$var($ViewFactory, f, getViewFactory());
		int32_t index0 = $nc(e)->getElementIndex(getStartOffset());
		int32_t index1 = e->getElementIndex(getEndOffset());
		$var($ViewArray, added, $new($ViewArray, index1 - index0 + 1));
		for (int32_t i = index0; i <= index1; ++i) {
			added->set(i - index0, $($nc(f)->create($(e->getElement(i)))));
		}
		replace(0, 0, added);
		this->this$0->zoneWasLoaded(this);
	}
}

void ZoneView$Zone::unload() {
	setEstimatedMajorSpan(true);
	removeAll();
}

bool ZoneView$Zone::isLoaded() {
	return (getViewCount() != 0);
}

void ZoneView$Zone::loadChildren($ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	setEstimatedMajorSpan(true);
	$var($Element, elem, getElement());
	int32_t index0 = $nc(elem)->getElementIndex(getStartOffset());
	int32_t index1 = elem->getElementIndex(getEndOffset());
	int32_t nChildren = index1 - index0;
	$var($View, first, $nc(f)->create($(elem->getElement(index0))));
	$nc(first)->setParent(this);
	float w = first->getPreferredSpan($View::X_AXIS);
	float h = first->getPreferredSpan($View::Y_AXIS);
	if (getMajorAxis() == $View::X_AXIS) {
		w *= nChildren;
	} else {
		h += nChildren;
	}
	setSize(w, h);
}

void ZoneView$Zone::flushRequirementChanges() {
	if (isLoaded()) {
		$AsyncBoxView::flushRequirementChanges();
	}
}

int32_t ZoneView$Zone::getViewIndex(int32_t pos, $Position$Bias* b) {
	$init($Position$Bias);
	bool isBackward = (b == $Position$Bias::Backward);
	pos = (isBackward) ? $Math::max(0, pos - 1) : pos;
	$var($Element, elem, getElement());
	int32_t index1 = $nc(elem)->getElementIndex(pos);
	int32_t index0 = elem->getElementIndex(getStartOffset());
	return index1 - index0;
}

bool ZoneView$Zone::updateChildren($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	$var($ElementArray, removedElems, $nc(ec)->getChildrenRemoved());
	$var($ElementArray, addedElems, ec->getChildrenAdded());
	$var($Element, elem, getElement());
	int32_t index0 = $nc(elem)->getElementIndex(getStartOffset());
	int32_t index1 = elem->getElementIndex(getEndOffset() - 1);
	int32_t index = ec->getIndex();
	if ((index >= index0) && (index <= index1)) {
		int32_t replaceIndex = index - index0;
		int32_t nadd = $Math::min(index1 - index0 + 1, $nc(addedElems)->length);
		int32_t nremove = $Math::min(index1 - index0 + 1, $nc(removedElems)->length);
		$var($ViewArray, added, $new($ViewArray, nadd));
		for (int32_t i = 0; i < nadd; ++i) {
			added->set(i, $($nc(f)->create($nc(addedElems)->get(i))));
		}
		replace(replaceIndex, nremove, added);
	}
	return true;
}

$AttributeSet* ZoneView$Zone::getAttributes() {
	return this->this$0->getAttributes();
}

void ZoneView$Zone::paint($Graphics* g, $Shape* a) {
	load();
	$AsyncBoxView::paint(g, a);
}

int32_t ZoneView$Zone::viewToModel(float x, float y, $Shape* a, $Position$BiasArray* bias) {
	load();
	return $AsyncBoxView::viewToModel(x, y, a, bias);
}

$Shape* ZoneView$Zone::modelToView(int32_t pos, $Shape* a, $Position$Bias* b) {
	load();
	return $AsyncBoxView::modelToView(pos, a, b);
}

int32_t ZoneView$Zone::getStartOffset() {
	return $nc(this->start)->getOffset();
}

int32_t ZoneView$Zone::getEndOffset() {
	return $nc(this->end)->getOffset();
}

void ZoneView$Zone::insertUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	if (isLoaded()) {
		$AsyncBoxView::insertUpdate(e, a, f);
	}
}

void ZoneView$Zone::removeUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	if (isLoaded()) {
		$AsyncBoxView::removeUpdate(e, a, f);
	}
}

void ZoneView$Zone::changedUpdate($DocumentEvent* e, $Shape* a, $ViewFactory* f) {
	if (isLoaded()) {
		$AsyncBoxView::changedUpdate(e, a, f);
	}
}

ZoneView$Zone::ZoneView$Zone() {
}

$Class* ZoneView$Zone::load$($String* name, bool initialize) {
	$loadClass(ZoneView$Zone, name, initialize, &_ZoneView$Zone_ClassInfo_, allocate$ZoneView$Zone);
	return class$;
}

$Class* ZoneView$Zone::class$ = nullptr;

		} // text
	} // swing
} // javax