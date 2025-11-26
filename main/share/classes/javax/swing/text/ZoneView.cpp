#include <javax/swing/text/ZoneView.h>

#include <java/awt/Shape.h>
#include <java/lang/Math.h>
#include <java/util/Vector.h>
#include <javax/swing/event/DocumentEvent$ElementChange.h>
#include <javax/swing/event/DocumentEvent.h>
#include <javax/swing/text/AsyncBoxView.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/BoxView.h>
#include <javax/swing/text/CompositeView.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/text/Position.h>
#include <javax/swing/text/StateInvariantError.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/ViewFactory.h>
#include <javax/swing/text/ZoneView$Zone.h>
#include <jcpp.h>

using $ViewArray = $Array<::javax::swing::text::View>;
using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;
using $DocumentEvent = ::javax::swing::event::DocumentEvent;
using $DocumentEvent$ElementChange = ::javax::swing::event::DocumentEvent$ElementChange;
using $AsyncBoxView = ::javax::swing::text::AsyncBoxView;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $BoxView = ::javax::swing::text::BoxView;
using $CompositeView = ::javax::swing::text::CompositeView;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $Position = ::javax::swing::text::Position;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $StateInvariantError = ::javax::swing::text::StateInvariantError;
using $View = ::javax::swing::text::View;
using $ViewFactory = ::javax::swing::text::ViewFactory;
using $ZoneView$Zone = ::javax::swing::text::ZoneView$Zone;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _ZoneView_FieldInfo_[] = {
	{"maxZoneSize", "I", nullptr, 0, $field(ZoneView, maxZoneSize)},
	{"maxZonesLoaded", "I", nullptr, 0, $field(ZoneView, maxZonesLoaded)},
	{"loadedZones", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/View;>;", 0, $field(ZoneView, loadedZones)},
	{}
};

$MethodInfo _ZoneView_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/Element;I)V", nullptr, $PUBLIC, $method(static_cast<void(ZoneView::*)($Element*,int32_t)>(&ZoneView::init$))},
	{"createZone", "(II)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getDesiredZoneEnd", "(I)I", nullptr, 0},
	{"getMaxZonesLoaded", "()I", nullptr, $PUBLIC},
	{"getMaximumZoneSize", "()I", nullptr, $PUBLIC},
	{"getViewIndexAtPosition", "(I)I", nullptr, $PROTECTED},
	{"handleInsert", "(II)V", nullptr, 0},
	{"handleRemove", "(II)V", nullptr, 0},
	{"insertUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"isZoneLoaded", "(Ljavax/swing/text/View;)Z", nullptr, $PROTECTED},
	{"loadChildren", "(Ljavax/swing/text/ViewFactory;)V", nullptr, $PROTECTED},
	{"removeUpdate", "(Ljavax/swing/event/DocumentEvent;Ljava/awt/Shape;Ljavax/swing/text/ViewFactory;)V", nullptr, $PUBLIC},
	{"setMaxZonesLoaded", "(I)V", nullptr, $PUBLIC},
	{"setMaximumZoneSize", "(I)V", nullptr, $PUBLIC},
	{"splitZone", "(III)V", nullptr, 0},
	{"unloadOldZones", "()V", nullptr, 0},
	{"unloadZone", "(Ljavax/swing/text/View;)V", nullptr, $PROTECTED},
	{"updateChildren", "(Ljavax/swing/event/DocumentEvent$ElementChange;Ljavax/swing/event/DocumentEvent;Ljavax/swing/text/ViewFactory;)Z", nullptr, $PROTECTED},
	{"zoneWasLoaded", "(Ljavax/swing/text/View;)V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _ZoneView_InnerClassesInfo_[] = {
	{"javax.swing.text.ZoneView$Zone", "javax.swing.text.ZoneView", "Zone", 0},
	{}
};

$ClassInfo _ZoneView_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.ZoneView",
	"javax.swing.text.BoxView",
	nullptr,
	_ZoneView_FieldInfo_,
	_ZoneView_MethodInfo_,
	nullptr,
	nullptr,
	_ZoneView_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.text.ZoneView$Zone"
};

$Object* allocate$ZoneView($Class* clazz) {
	return $of($alloc(ZoneView));
}

void ZoneView::init$($Element* elem, int32_t axis) {
	$BoxView::init$(elem, axis);
	this->maxZoneSize = 8 * 1024;
	this->maxZonesLoaded = 3;
	$set(this, loadedZones, $new($Vector));
}

int32_t ZoneView::getMaximumZoneSize() {
	return this->maxZoneSize;
}

void ZoneView::setMaximumZoneSize(int32_t size) {
	this->maxZoneSize = size;
}

int32_t ZoneView::getMaxZonesLoaded() {
	return this->maxZonesLoaded;
}

void ZoneView::setMaxZonesLoaded(int32_t mzl) {
	if (mzl < 1) {
		$throwNew($IllegalArgumentException, "ZoneView.setMaxZonesLoaded must be greater than 0."_s);
	}
	this->maxZonesLoaded = mzl;
	unloadOldZones();
}

void ZoneView::zoneWasLoaded($View* zone) {
	$nc(this->loadedZones)->addElement(zone);
	unloadOldZones();
}

void ZoneView::unloadOldZones() {
	$useLocalCurrentObjectStackCache();
	while (true) {
		int32_t var$0 = $nc(this->loadedZones)->size();
		if (!(var$0 > getMaxZonesLoaded())) {
			break;
		}
		{
			$var($View, zone, $cast($View, $nc(this->loadedZones)->elementAt(0)));
			$nc(this->loadedZones)->removeElementAt(0);
			unloadZone(zone);
		}
	}
}

void ZoneView::unloadZone($View* zone) {
	$nc(zone)->removeAll();
}

bool ZoneView::isZoneLoaded($View* zone) {
	return ($nc(zone)->getViewCount() > 0);
}

$View* ZoneView::createZone(int32_t p0, int32_t p1) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	$var($View, zone, nullptr);
	try {
		$var($Element, var$0, getElement());
		$var($Position, var$1, $nc(doc)->createPosition(p0));
		$assign(zone, $new($ZoneView$Zone, this, var$0, var$1, $(doc->createPosition(p1))));
	} catch ($BadLocationException& ble) {
		$throwNew($StateInvariantError, $(ble->getMessage()));
	}
	return zone;
}

void ZoneView::loadChildren($ViewFactory* f) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, getDocument());
	int32_t offs0 = getStartOffset();
	int32_t offs1 = getEndOffset();
	append($(createZone(offs0, offs1)));
	handleInsert(offs0, offs1 - offs0);
}

int32_t ZoneView::getViewIndexAtPosition(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	int32_t n = getViewCount();
	if (pos == getEndOffset()) {
		return n - 1;
	}
	for (int32_t i = 0; i < n; ++i) {
		$var($View, v, getView(i));
		bool var$0 = pos >= $nc(v)->getStartOffset();
		if (var$0 && pos < v->getEndOffset()) {
			return i;
		}
	}
	return -1;
}

void ZoneView::handleInsert(int32_t pos, int32_t length) {
	$init($Position$Bias);
	int32_t index = getViewIndex(pos, $Position$Bias::Forward);
	$var($View, v, getView(index));
	int32_t offs0 = $nc(v)->getStartOffset();
	int32_t offs1 = v->getEndOffset();
	if ((offs1 - offs0) > this->maxZoneSize) {
		splitZone(index, offs0, offs1);
	}
}

void ZoneView::handleRemove(int32_t pos, int32_t length) {
}

void ZoneView::splitZone(int32_t index, int32_t offs0, int32_t offs1) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, getElement());
	$var($Document, doc, $nc(elem)->getDocument());
	$var($Vector, zones, $new($Vector));
	int32_t offs = offs0;
	do {
		offs0 = offs;
		offs = $Math::min(getDesiredZoneEnd(offs0), offs1);
		zones->addElement($(createZone(offs0, offs)));
	} while (offs < offs1);
	$var($View, oldZone, getView(index));
	$var($ViewArray, newZones, $new($ViewArray, zones->size()));
	zones->copyInto(newZones);
	replace(index, 1, newZones);
}

int32_t ZoneView::getDesiredZoneEnd(int32_t pos) {
	$useLocalCurrentObjectStackCache();
	$var($Element, elem, getElement());
	int32_t index = $nc(elem)->getElementIndex(pos + (this->maxZoneSize / 2));
	$var($Element, child, elem->getElement(index));
	int32_t offs0 = $nc(child)->getStartOffset();
	int32_t offs1 = child->getEndOffset();
	if ((offs1 - pos) > this->maxZoneSize) {
		if (offs0 > pos) {
			return offs0;
		}
	}
	return offs1;
}

bool ZoneView::updateChildren($DocumentEvent$ElementChange* ec, $DocumentEvent* e, $ViewFactory* f) {
	return false;
}

void ZoneView::insertUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	int32_t var$0 = $nc(changes)->getOffset();
	handleInsert(var$0, changes->getLength());
	$BoxView::insertUpdate(changes, a, f);
}

void ZoneView::removeUpdate($DocumentEvent* changes, $Shape* a, $ViewFactory* f) {
	int32_t var$0 = $nc(changes)->getOffset();
	handleRemove(var$0, changes->getLength());
	$BoxView::removeUpdate(changes, a, f);
}

ZoneView::ZoneView() {
}

$Class* ZoneView::load$($String* name, bool initialize) {
	$loadClass(ZoneView, name, initialize, &_ZoneView_ClassInfo_, allocate$ZoneView);
	return class$;
}

$Class* ZoneView::class$ = nullptr;

		} // text
	} // swing
} // javax