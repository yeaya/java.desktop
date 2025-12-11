#include <javax/swing/plaf/basic/BasicListUI$Handler.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList$DropLocation.h>
#include <javax/swing/JList.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/ListDataEvent.h>
#include <javax/swing/event/ListDataListener.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicListUI.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport.h>
#include <javax/swing/text/Position$Bias.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef MOUSE_PRESSED
#undef SINGLE_SELECTION
#undef VERTICAL
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED

using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JList = ::javax::swing::JList;
using $JList$DropLocation = ::javax::swing::JList$DropLocation;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListModel = ::javax::swing::ListModel;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicListUI = ::javax::swing::plaf::basic::BasicListUI;
using $DragRecognitionSupport = ::javax::swing::plaf::basic::DragRecognitionSupport;
using $DragRecognitionSupport$BeforeDrag = ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicListUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicListUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicListUI$Handler, this$0)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicListUI$Handler, prefix)},
	{"typedString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicListUI$Handler, typedString)},
	{"lastTime", "J", nullptr, $PRIVATE, $field(BasicListUI$Handler, lastTime)},
	{"dragPressDidSelection", "Z", nullptr, $PRIVATE, $field(BasicListUI$Handler, dragPressDidSelection)},
	{}
};

$MethodInfo _BasicListUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicListUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicListUI$Handler::*)($BasicListUI*)>(&BasicListUI$Handler::init$))},
	{"adjustSelection", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicListUI$Handler::*)($MouseEvent*)>(&BasicListUI$Handler::adjustSelection))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"dragStarting", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"isNavigationKey", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicListUI$Handler::*)($KeyEvent*)>(&BasicListUI$Handler::isNavigationKey))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"repaintCellFocus", "()V", nullptr, $PROTECTED},
	{"repaintDropLocation", "(Ljavax/swing/JList$DropLocation;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicListUI$Handler::*)($JList$DropLocation*)>(&BasicListUI$Handler::repaintDropLocation))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicListUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicListUI$Handler", "javax.swing.plaf.basic.BasicListUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag", "javax.swing.plaf.basic.DragRecognitionSupport", "BeforeDrag", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _BasicListUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicListUI$Handler",
	"java.lang.Object",
	"java.awt.event.FocusListener,java.awt.event.KeyListener,javax.swing.event.ListDataListener,javax.swing.event.ListSelectionListener,javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener,javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag",
	_BasicListUI$Handler_FieldInfo_,
	_BasicListUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicListUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicListUI"
};

$Object* allocate$BasicListUI$Handler($Class* clazz) {
	return $of($alloc(BasicListUI$Handler));
}

int32_t BasicListUI$Handler::hashCode() {
	 return this->$FocusListener::hashCode();
}

bool BasicListUI$Handler::equals(Object$* arg0) {
	 return this->$FocusListener::equals(arg0);
}

$Object* BasicListUI$Handler::clone() {
	 return this->$FocusListener::clone();
}

$String* BasicListUI$Handler::toString() {
	 return this->$FocusListener::toString();
}

void BasicListUI$Handler::finalize() {
	this->$FocusListener::finalize();
}

void BasicListUI$Handler::init$($BasicListUI* this$0) {
	$set(this, this$0, this$0);
	$set(this, prefix, ""_s);
	$set(this, typedString, ""_s);
	this->lastTime = 0;
}

void BasicListUI$Handler::keyTyped($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($JList, src, $cast($JList, $nc(e)->getSource()));
	$var($ListModel, model, $nc(src)->getModel());
	bool var$2 = $nc(model)->getSize() == 0;
	bool var$1 = var$2 || e->isAltDown();
	bool var$0 = var$1 || $BasicGraphicsUtils::isMenuShortcutKeyDown(e);
	if (var$0 || isNavigationKey(e)) {
		return;
	}
	bool startingFromSelection = true;
	char16_t c = e->getKeyChar();
	int64_t time = e->getWhen();
	int32_t startIndex = $BasicListUI::adjustIndex(src->getLeadSelectionIndex(), this->this$0->list);
	if (time - this->lastTime < this->this$0->timeFactor) {
		$plusAssignField(this, typedString, c);
		bool var$3 = ($nc(this->prefix)->length() == 1);
		if (var$3 && (c == $nc(this->prefix)->charAt(0))) {
			++startIndex;
		} else {
			$set(this, prefix, this->typedString);
		}
	} else {
		++startIndex;
		$set(this, typedString, $str({""_s, $$str(c)}));
		$set(this, prefix, this->typedString);
	}
	this->lastTime = time;
	if (startIndex < 0 || startIndex >= $nc(model)->getSize()) {
		startingFromSelection = false;
		startIndex = 0;
	}
	$init($Position$Bias);
	int32_t index = src->getNextMatch(this->prefix, startIndex, $Position$Bias::Forward);
	if (index >= 0) {
		src->setSelectedIndex(index);
		src->ensureIndexIsVisible(index);
	} else if (startingFromSelection) {
		index = src->getNextMatch(this->prefix, 0, $Position$Bias::Forward);
		if (index >= 0) {
			src->setSelectedIndex(index);
			src->ensureIndexIsVisible(index);
		}
	}
}

void BasicListUI$Handler::keyPressed($KeyEvent* e) {
	if (isNavigationKey(e)) {
		$set(this, prefix, ""_s);
		$set(this, typedString, ""_s);
		this->lastTime = 0;
	}
}

void BasicListUI$Handler::keyReleased($KeyEvent* e) {
}

bool BasicListUI$Handler::isNavigationKey($KeyEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, inputMap, $nc(this->this$0->list)->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$var($KeyStroke, key, $KeyStroke::getKeyStrokeForEvent(event));
	if (inputMap != nullptr && inputMap->get(key) != nullptr) {
		return true;
	}
	return false;
}

void BasicListUI$Handler::propertyChange($PropertyChangeEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($String, propertyName, $nc(e)->getPropertyName());
	if (propertyName == "model"_s) {
		$var($ListModel, oldModel, $cast($ListModel, e->getOldValue()));
		$var($ListModel, newModel, $cast($ListModel, e->getNewValue()));
		if (oldModel != nullptr) {
			oldModel->removeListDataListener(this->this$0->listDataListener);
		}
		if (newModel != nullptr) {
			newModel->addListDataListener(this->this$0->listDataListener);
		}
		this->this$0->updateLayoutStateNeeded |= 1;
		this->this$0->redrawList();
	} else if (propertyName == "selectionModel"_s) {
		$var($ListSelectionModel, oldModel, $cast($ListSelectionModel, e->getOldValue()));
		$var($ListSelectionModel, newModel, $cast($ListSelectionModel, e->getNewValue()));
		if (oldModel != nullptr) {
			oldModel->removeListSelectionListener(this->this$0->listSelectionListener);
		}
		if (newModel != nullptr) {
			newModel->addListSelectionListener(this->this$0->listSelectionListener);
		}
		this->this$0->updateLayoutStateNeeded |= 1;
		this->this$0->redrawList();
	} else if (propertyName == "cellRenderer"_s) {
		this->this$0->updateLayoutStateNeeded |= 64;
		this->this$0->redrawList();
	} else if (propertyName == "font"_s || $SwingUtilities2::isScaleChanged(e)) {
		this->this$0->updateLayoutStateNeeded |= 4;
		this->this$0->redrawList();
	} else if (propertyName == "prototypeCellValue"_s) {
		this->this$0->updateLayoutStateNeeded |= 32;
		this->this$0->redrawList();
	} else if (propertyName == "fixedCellHeight"_s) {
		this->this$0->updateLayoutStateNeeded |= 16;
		this->this$0->redrawList();
	} else if (propertyName == "fixedCellWidth"_s) {
		this->this$0->updateLayoutStateNeeded |= 8;
		this->this$0->redrawList();
	} else if (propertyName == "selectionForeground"_s) {
		$nc(this->this$0->list)->repaint();
	} else if (propertyName == "selectionBackground"_s) {
		$nc(this->this$0->list)->repaint();
	} else if ("layoutOrientation"_s == propertyName) {
		this->this$0->updateLayoutStateNeeded |= 128;
		this->this$0->layoutOrientation = $nc(this->this$0->list)->getLayoutOrientation();
		this->this$0->redrawList();
	} else if ("visibleRowCount"_s == propertyName) {
		if (this->this$0->layoutOrientation != $JList::VERTICAL) {
			this->this$0->updateLayoutStateNeeded |= 128;
			this->this$0->redrawList();
		}
	} else if ("componentOrientation"_s == propertyName) {
		this->this$0->isLeftToRight = $nc($($nc(this->this$0->list)->getComponentOrientation()))->isLeftToRight();
		this->this$0->updateLayoutStateNeeded |= 1024;
		this->this$0->redrawList();
		$var($InputMap, inputMap, this->this$0->getInputMap($JComponent::WHEN_FOCUSED));
		$SwingUtilities::replaceUIInputMap(this->this$0->list, $JComponent::WHEN_FOCUSED, inputMap);
	} else if ("List.isFileList"_s == propertyName) {
		this->this$0->updateIsFileList();
		this->this$0->redrawList();
	} else if ("dropLocation"_s == propertyName) {
		$var($JList$DropLocation, oldValue, $cast($JList$DropLocation, e->getOldValue()));
		repaintDropLocation(oldValue);
		repaintDropLocation($($nc(this->this$0->list)->getDropLocation()));
	}
}

void BasicListUI$Handler::repaintDropLocation($JList$DropLocation* loc) {
	if (loc == nullptr) {
		return;
	}
	$var($Rectangle, r, nullptr);
	if ($nc(loc)->isInsert()) {
		$assign(r, this->this$0->getDropLineRect(loc));
	} else {
		$assign(r, this->this$0->getCellBounds(this->this$0->list, loc->getIndex()));
	}
	if (r != nullptr) {
		$nc(this->this$0->list)->repaint(r);
	}
}

void BasicListUI$Handler::intervalAdded($ListDataEvent* e) {
	this->this$0->updateLayoutStateNeeded = 1;
	int32_t var$0 = $nc(e)->getIndex0();
	int32_t minIndex = $Math::min(var$0, e->getIndex1());
	int32_t var$1 = $nc(e)->getIndex0();
	int32_t maxIndex = $Math::max(var$1, e->getIndex1());
	$var($ListSelectionModel, sm, $nc(this->this$0->list)->getSelectionModel());
	if (sm != nullptr) {
		sm->insertIndexInterval(minIndex, maxIndex - minIndex + 1, true);
	}
	this->this$0->redrawList();
}

void BasicListUI$Handler::intervalRemoved($ListDataEvent* e) {
	this->this$0->updateLayoutStateNeeded = 1;
	$var($ListSelectionModel, sm, $nc(this->this$0->list)->getSelectionModel());
	if (sm != nullptr) {
		int32_t var$0 = $nc(e)->getIndex0();
		sm->removeIndexInterval(var$0, e->getIndex1());
	}
	this->this$0->redrawList();
}

void BasicListUI$Handler::contentsChanged($ListDataEvent* e) {
	this->this$0->updateLayoutStateNeeded = 1;
	this->this$0->redrawList();
}

void BasicListUI$Handler::valueChanged($ListSelectionEvent* e) {
	$useLocalCurrentObjectStackCache();
	this->this$0->maybeUpdateLayoutState();
	int32_t size = $nc($($nc(this->this$0->list)->getModel()))->getSize();
	int32_t firstIndex = $Math::min(size - 1, $Math::max($nc(e)->getFirstIndex(), 0));
	int32_t lastIndex = $Math::min(size - 1, $Math::max($nc(e)->getLastIndex(), 0));
	$var($Rectangle, bounds, this->this$0->getCellBounds(this->this$0->list, firstIndex, lastIndex));
	if (bounds != nullptr) {
		$nc(this->this$0->list)->repaint(bounds->x, bounds->y, bounds->width, bounds->height);
	}
}

void BasicListUI$Handler::mouseClicked($MouseEvent* e) {
}

void BasicListUI$Handler::mouseEntered($MouseEvent* e) {
}

void BasicListUI$Handler::mouseExited($MouseEvent* e) {
}

void BasicListUI$Handler::mousePressed($MouseEvent* e) {
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->list)) {
		return;
	}
	bool dragEnabled = $nc(this->this$0->list)->getDragEnabled();
	bool grabFocus = true;
	if (dragEnabled) {
		int32_t row = $SwingUtilities2::loc2IndexFileList(this->this$0->list, $($nc(e)->getPoint()));
		if (row != -1 && $DragRecognitionSupport::mousePressed(e)) {
			this->dragPressDidSelection = false;
			if ($BasicGraphicsUtils::isMenuShortcutKeyDown(e)) {
				return;
			} else {
				bool var$1 = !$nc(e)->isShiftDown();
				if (var$1 && $nc(this->this$0->list)->isSelectedIndex(row)) {
					$nc(this->this$0->list)->addSelectionInterval(row, row);
					return;
				}
			}
			grabFocus = false;
			this->dragPressDidSelection = true;
		}
	} else {
		$nc(this->this$0->list)->setValueIsAdjusting(true);
	}
	if (grabFocus) {
		$SwingUtilities2::adjustFocus(this->this$0->list);
	}
	adjustSelection(e);
}

void BasicListUI$Handler::adjustSelection($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t row = $SwingUtilities2::loc2IndexFileList(this->this$0->list, $($nc(e)->getPoint()));
	if (row < 0) {
		bool var$0 = this->this$0->isFileList && $nc(e)->getID() == $MouseEvent::MOUSE_PRESSED;
		if (var$0) {
			bool var$1 = !e->isShiftDown();
			var$0 = (var$1 || $nc(this->this$0->list)->getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION);
		}
		if (var$0) {
			$nc(this->this$0->list)->clearSelection();
		}
	} else {
		int32_t anchorIndex = $BasicListUI::adjustIndex($nc(this->this$0->list)->getAnchorSelectionIndex(), this->this$0->list);
		bool anchorSelected = false;
		if (anchorIndex == -1) {
			anchorIndex = 0;
			anchorSelected = false;
		} else {
			anchorSelected = $nc(this->this$0->list)->isSelectedIndex(anchorIndex);
		}
		if ($BasicGraphicsUtils::isMenuShortcutKeyDown(e)) {
			if ($nc(e)->isShiftDown()) {
				if (anchorSelected) {
					$nc(this->this$0->list)->addSelectionInterval(anchorIndex, row);
				} else {
					$nc(this->this$0->list)->removeSelectionInterval(anchorIndex, row);
					if (this->this$0->isFileList) {
						$nc(this->this$0->list)->addSelectionInterval(row, row);
						$nc($($nc(this->this$0->list)->getSelectionModel()))->setAnchorSelectionIndex(anchorIndex);
					}
				}
			} else if ($nc(this->this$0->list)->isSelectedIndex(row)) {
				$nc(this->this$0->list)->removeSelectionInterval(row, row);
			} else {
				$nc(this->this$0->list)->addSelectionInterval(row, row);
			}
		} else if ($nc(e)->isShiftDown()) {
			$nc(this->this$0->list)->setSelectionInterval(anchorIndex, row);
		} else {
			$nc(this->this$0->list)->setSelectionInterval(row, row);
		}
	}
}

void BasicListUI$Handler::dragStarting($MouseEvent* me) {
	if ($BasicGraphicsUtils::isMenuShortcutKeyDown(me)) {
		int32_t row = $SwingUtilities2::loc2IndexFileList(this->this$0->list, $($nc(me)->getPoint()));
		$nc(this->this$0->list)->addSelectionInterval(row, row);
	}
}

void BasicListUI$Handler::mouseDragged($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->list)) {
		return;
	}
	if ($nc(this->this$0->list)->getDragEnabled()) {
		$DragRecognitionSupport::mouseDragged(e, this);
		return;
	}
	bool var$0 = $nc(e)->isShiftDown();
	if (var$0 || $BasicGraphicsUtils::isMenuShortcutKeyDown(e)) {
		return;
	}
	int32_t row = this->this$0->locationToIndex(this->this$0->list, $($nc(e)->getPoint()));
	if (row != -1) {
		if (this->this$0->isFileList) {
			return;
		}
		$var($Rectangle, cellBounds, this->this$0->getCellBounds(this->this$0->list, row, row));
		if (cellBounds != nullptr) {
			$nc(this->this$0->list)->scrollRectToVisible(cellBounds);
			$nc(this->this$0->list)->setSelectionInterval(row, row);
		}
	}
}

void BasicListUI$Handler::mouseMoved($MouseEvent* e) {
}

void BasicListUI$Handler::mouseReleased($MouseEvent* e) {
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->list)) {
		return;
	}
	if ($nc(this->this$0->list)->getDragEnabled()) {
		$var($MouseEvent, me, $DragRecognitionSupport::mouseReleased(e));
		if (me != nullptr) {
			$SwingUtilities2::adjustFocus(this->this$0->list);
			if (!this->dragPressDidSelection) {
				adjustSelection(me);
			}
		}
	} else {
		$nc(this->this$0->list)->setValueIsAdjusting(false);
	}
}

void BasicListUI$Handler::repaintCellFocus() {
	int32_t leadIndex = $BasicListUI::adjustIndex($nc(this->this$0->list)->getLeadSelectionIndex(), this->this$0->list);
	if (leadIndex != -1) {
		$var($Rectangle, r, this->this$0->getCellBounds(this->this$0->list, leadIndex, leadIndex));
		if (r != nullptr) {
			$nc(this->this$0->list)->repaint(r->x, r->y, r->width, r->height);
		}
	}
}

void BasicListUI$Handler::focusGained($FocusEvent* e) {
	repaintCellFocus();
}

void BasicListUI$Handler::focusLost($FocusEvent* e) {
	repaintCellFocus();
}

BasicListUI$Handler::BasicListUI$Handler() {
}

$Class* BasicListUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicListUI$Handler, name, initialize, &_BasicListUI$Handler_ClassInfo_, allocate$BasicListUI$Handler);
	return class$;
}

$Class* BasicListUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax