#include <javax/swing/plaf/basic/BasicTableUI$Handler.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/CellEditor.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable$DropLocation.h>
#include <javax/swing/JTable.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/ListSelectionModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <javax/swing/event/ListSelectionListener.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport.h>
#include <javax/swing/table/JTableHeader.h>
#include <javax/swing/table/TableCellEditor.h>
#include <javax/swing/table/TableColumnModel.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef MOUSE_PRESSED
#undef SINGLE_SELECTION
#undef TRUE
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $CellEditor = ::javax::swing::CellEditor;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $JTable$DropLocation = ::javax::swing::JTable$DropLocation;
using $KeyStroke = ::javax::swing::KeyStroke;
using $ListSelectionModel = ::javax::swing::ListSelectionModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;
using $ListSelectionListener = ::javax::swing::event::ListSelectionListener;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $DragRecognitionSupport = ::javax::swing::plaf::basic::DragRecognitionSupport;
using $DragRecognitionSupport$BeforeDrag = ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag;
using $JTableHeader = ::javax::swing::table::JTableHeader;
using $TableCellEditor = ::javax::swing::table::TableCellEditor;
using $TableColumnModel = ::javax::swing::table::TableColumnModel;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTableUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTableUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTableUI$Handler, this$0)},
	{"dispatchComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(BasicTableUI$Handler, dispatchComponent)},
	{"pressedRow", "I", nullptr, $PRIVATE, $field(BasicTableUI$Handler, pressedRow)},
	{"pressedCol", "I", nullptr, $PRIVATE, $field(BasicTableUI$Handler, pressedCol)},
	{"pressedEvent", "Ljava/awt/event/MouseEvent;", nullptr, $PRIVATE, $field(BasicTableUI$Handler, pressedEvent)},
	{"dragPressDidSelection", "Z", nullptr, $PRIVATE, $field(BasicTableUI$Handler, dragPressDidSelection)},
	{"dragStarted", "Z", nullptr, $PRIVATE, $field(BasicTableUI$Handler, dragStarted)},
	{"shouldStartTimer", "Z", nullptr, $PRIVATE, $field(BasicTableUI$Handler, shouldStartTimer)},
	{"outsidePrefSize", "Z", nullptr, $PRIVATE, $field(BasicTableUI$Handler, outsidePrefSize)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE, $field(BasicTableUI$Handler, timer)},
	{}
};

$MethodInfo _BasicTableUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTableUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)($BasicTableUI*)>(&BasicTableUI$Handler::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"adjustSelection", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)($MouseEvent*)>(&BasicTableUI$Handler::adjustSelection))},
	{"canStartDrag", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTableUI$Handler::*)()>(&BasicTableUI$Handler::canStartDrag))},
	{"dragStarting", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"maybeStartTimer", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)()>(&BasicTableUI$Handler::maybeStartTimer))},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressedDND", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)($MouseEvent*)>(&BasicTableUI$Handler::mousePressedDND))},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleasedDND", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)($MouseEvent*)>(&BasicTableUI$Handler::mouseReleasedDND))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"repaintDropLocation", "(Ljavax/swing/JTable$DropLocation;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)($JTable$DropLocation*)>(&BasicTableUI$Handler::repaintDropLocation))},
	{"repaintLeadCell", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)()>(&BasicTableUI$Handler::repaintLeadCell))},
	{"repostEvent", "(Ljava/awt/event/MouseEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTableUI$Handler::*)($MouseEvent*)>(&BasicTableUI$Handler::repostEvent))},
	{"setDispatchComponent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)($MouseEvent*)>(&BasicTableUI$Handler::setDispatchComponent))},
	{"setValueIsAdjusting", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTableUI$Handler::*)(bool)>(&BasicTableUI$Handler::setValueIsAdjusting))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTableUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableUI$Handler", "javax.swing.plaf.basic.BasicTableUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag", "javax.swing.plaf.basic.DragRecognitionSupport", "BeforeDrag", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _BasicTableUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableUI$Handler",
	"java.lang.Object",
	"java.awt.event.FocusListener,javax.swing.event.MouseInputListener,java.beans.PropertyChangeListener,javax.swing.event.ListSelectionListener,java.awt.event.ActionListener,javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag",
	_BasicTableUI$Handler_FieldInfo_,
	_BasicTableUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableUI"
};

$Object* allocate$BasicTableUI$Handler($Class* clazz) {
	return $of($alloc(BasicTableUI$Handler));
}

int32_t BasicTableUI$Handler::hashCode() {
	 return this->$FocusListener::hashCode();
}

bool BasicTableUI$Handler::equals(Object$* arg0) {
	 return this->$FocusListener::equals(arg0);
}

$Object* BasicTableUI$Handler::clone() {
	 return this->$FocusListener::clone();
}

$String* BasicTableUI$Handler::toString() {
	 return this->$FocusListener::toString();
}

void BasicTableUI$Handler::finalize() {
	this->$FocusListener::finalize();
}

void BasicTableUI$Handler::init$($BasicTableUI* this$0) {
	$set(this, this$0, this$0);
	$set(this, timer, nullptr);
}

void BasicTableUI$Handler::repaintLeadCell() {
	int32_t lr = $BasicTableUI::getAdjustedLead(this->this$0->table, true);
	int32_t lc = $BasicTableUI::getAdjustedLead(this->this$0->table, false);
	if (lr < 0 || lc < 0) {
		return;
	}
	$var($Rectangle, dirtyRect, $nc(this->this$0->table)->getCellRect(lr, lc, false));
	$nc(this->this$0->table)->repaint(dirtyRect);
}

void BasicTableUI$Handler::focusGained($FocusEvent* e) {
	repaintLeadCell();
}

void BasicTableUI$Handler::focusLost($FocusEvent* e) {
	repaintLeadCell();
}

void BasicTableUI$Handler::keyPressed($KeyEvent* e) {
}

void BasicTableUI$Handler::keyReleased($KeyEvent* e) {
}

void BasicTableUI$Handler::keyTyped($KeyEvent* e) {
	int32_t var$0 = (int32_t)$nc(e)->getKeyChar();
	$var($KeyStroke, keyStroke, $KeyStroke::getKeyStroke(var$0, e->getModifiers()));
	$var($InputMap, map, $nc(this->this$0->table)->getInputMap($JComponent::WHEN_FOCUSED));
	if (map != nullptr && map->get(keyStroke) != nullptr) {
		return;
	}
	$assign(map, $nc(this->this$0->table)->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	if (map != nullptr && map->get(keyStroke) != nullptr) {
		return;
	}
	$assign(keyStroke, $KeyStroke::getKeyStrokeForEvent(e));
	if ($nc(e)->getKeyChar() == u'\r') {
		return;
	}
	int32_t leadRow = $BasicTableUI::getAdjustedLead(this->this$0->table, true);
	int32_t leadColumn = $BasicTableUI::getAdjustedLead(this->this$0->table, false);
	if (leadRow != -1 && leadColumn != -1 && !$nc(this->this$0->table)->isEditing()) {
		if (!$nc(this->this$0->table)->editCellAt(leadRow, leadColumn)) {
			return;
		}
	}
	$var($Component, editorComp, $nc(this->this$0->table)->getEditorComponent());
	if ($nc(this->this$0->table)->isEditing() && editorComp != nullptr) {
		if ($instanceOf($JComponent, editorComp)) {
			$var($JComponent, component, $cast($JComponent, editorComp));
			$assign(map, component->getInputMap($JComponent::WHEN_FOCUSED));
			$var($Object, binding, (map != nullptr) ? $nc(map)->get(keyStroke) : ($Object*)nullptr);
			if (binding == nullptr) {
				$assign(map, component->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
				$assign(binding, (map != nullptr) ? $nc(map)->get(keyStroke) : ($Object*)nullptr);
			}
			if (binding != nullptr) {
				$var($ActionMap, am, component->getActionMap());
				$var($Action, action, (am != nullptr) ? $nc(am)->get(binding) : ($Action*)nullptr);
				if (action != nullptr && $SwingUtilities::notifyAction(action, keyStroke, e, component, $nc(e)->getModifiers())) {
					$nc(e)->consume();
				}
			}
		}
	}
}

void BasicTableUI$Handler::mouseClicked($MouseEvent* e) {
}

void BasicTableUI$Handler::setDispatchComponent($MouseEvent* e) {
	$var($Component, editorComponent, $nc(this->this$0->table)->getEditorComponent());
	$var($Point, p, $nc(e)->getPoint());
	$var($Point, p2, $SwingUtilities::convertPoint(this->this$0->table, p, editorComponent));
	$set(this, dispatchComponent, $SwingUtilities::getDeepestComponentAt(editorComponent, $nc(p2)->x, p2->y));
	$SwingUtilities2::setSkipClickCount(this->dispatchComponent, e->getClickCount() - 1);
}

bool BasicTableUI$Handler::repostEvent($MouseEvent* e) {
	if (this->dispatchComponent == nullptr || !$nc(this->this$0->table)->isEditing()) {
		return false;
	}
	$var($MouseEvent, e2, $SwingUtilities::convertMouseEvent(this->this$0->table, e, this->dispatchComponent));
	$nc(this->dispatchComponent)->dispatchEvent(e2);
	return true;
}

void BasicTableUI$Handler::setValueIsAdjusting(bool flag) {
	$nc($($nc(this->this$0->table)->getSelectionModel()))->setValueIsAdjusting(flag);
	$nc($($nc($($nc(this->this$0->table)->getColumnModel()))->getSelectionModel()))->setValueIsAdjusting(flag);
}

bool BasicTableUI$Handler::canStartDrag() {
	if (this->pressedRow == -1 || this->pressedCol == -1) {
		return false;
	}
	if (this->this$0->isFileList) {
		return !this->outsidePrefSize;
	}
	bool var$0 = ($nc($($nc(this->this$0->table)->getSelectionModel()))->getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION);
	if (var$0 && ($nc($($nc($($nc(this->this$0->table)->getColumnModel()))->getSelectionModel()))->getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION)) {
		return true;
	}
	return $nc(this->this$0->table)->isCellSelected(this->pressedRow, this->pressedCol);
}

void BasicTableUI$Handler::mousePressed($MouseEvent* e) {
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->table)) {
		return;
	}
	bool var$0 = $nc(this->this$0->table)->isEditing();
	if (var$0 && !$nc($($nc(this->this$0->table)->getCellEditor()))->stopCellEditing()) {
		$var($Component, editorComponent, $nc(this->this$0->table)->getEditorComponent());
		if (editorComponent != nullptr && !editorComponent->hasFocus()) {
			$SwingUtilities2::compositeRequestFocus(editorComponent);
		}
		return;
	}
	$var($Point, p, $nc(e)->getPoint());
	this->pressedRow = $nc(this->this$0->table)->rowAtPoint(p);
	this->pressedCol = $nc(this->this$0->table)->columnAtPoint(p);
	this->outsidePrefSize = this->this$0->pointOutsidePrefSize(this->pressedRow, this->pressedCol, p);
	if (this->this$0->isFileList) {
		bool var$2 = $nc(this->this$0->table)->isCellSelected(this->pressedRow, this->pressedCol);
		bool var$1 = var$2 && !e->isShiftDown();
		this->shouldStartTimer = var$1 && !$BasicGraphicsUtils::isMenuShortcutKeyDown(e) && !this->outsidePrefSize;
	}
	if ($nc(this->this$0->table)->getDragEnabled()) {
		mousePressedDND(e);
	} else {
		$SwingUtilities2::adjustFocus(this->this$0->table);
		if (!this->this$0->isFileList) {
			setValueIsAdjusting(true);
		}
		adjustSelection(e);
	}
}

void BasicTableUI$Handler::mousePressedDND($MouseEvent* e) {
	$set(this, pressedEvent, e);
	bool grabFocus = true;
	this->dragStarted = false;
	bool var$0 = canStartDrag();
	if (var$0 && $DragRecognitionSupport::mousePressed(e)) {
		this->dragPressDidSelection = false;
		if ($BasicGraphicsUtils::isMenuShortcutKeyDown(e) && this->this$0->isFileList) {
			return;
		} else {
			bool var$2 = !e->isShiftDown();
			if (var$2 && $nc(this->this$0->table)->isCellSelected(this->pressedRow, this->pressedCol)) {
				$nc($($nc(this->this$0->table)->getSelectionModel()))->addSelectionInterval(this->pressedRow, this->pressedRow);
				$nc($($nc($($nc(this->this$0->table)->getColumnModel()))->getSelectionModel()))->addSelectionInterval(this->pressedCol, this->pressedCol);
				return;
			}
		}
		this->dragPressDidSelection = true;
		grabFocus = false;
	} else if (!this->this$0->isFileList) {
		setValueIsAdjusting(true);
	}
	if (grabFocus) {
		$SwingUtilities2::adjustFocus(this->this$0->table);
	}
	adjustSelection(e);
}

void BasicTableUI$Handler::adjustSelection($MouseEvent* e) {
	if (this->outsidePrefSize) {
		bool var$0 = $nc(e)->getID() == $MouseEvent::MOUSE_PRESSED;
		if (var$0) {
			bool var$1 = !e->isShiftDown();
			var$0 = (var$1 || $nc($($nc(this->this$0->table)->getSelectionModel()))->getSelectionMode() == $ListSelectionModel::SINGLE_SELECTION);
		}
		if (var$0) {
			$nc(this->this$0->table)->clearSelection();
			$var($TableCellEditor, tce, $nc(this->this$0->table)->getCellEditor());
			if (tce != nullptr) {
				tce->stopCellEditing();
			}
		}
		return;
	}
	if ((this->pressedCol == -1) || (this->pressedRow == -1)) {
		return;
	}
	bool dragEnabled = $nc(this->this$0->table)->getDragEnabled();
	if (!dragEnabled && !this->this$0->isFileList && $nc(this->this$0->table)->editCellAt(this->pressedRow, this->pressedCol, e)) {
		setDispatchComponent(e);
		repostEvent(e);
	}
	$var($CellEditor, editor, $nc(this->this$0->table)->getCellEditor());
	if (dragEnabled || editor == nullptr || $nc(editor)->shouldSelectCell(e)) {
		int32_t var$2 = this->pressedRow;
		int32_t var$3 = this->pressedCol;
		bool var$4 = $BasicGraphicsUtils::isMenuShortcutKeyDown(e);
		$nc(this->this$0->table)->changeSelection(var$2, var$3, var$4, $nc(e)->isShiftDown());
	}
}

void BasicTableUI$Handler::valueChanged($ListSelectionEvent* e) {
	if (this->timer != nullptr) {
		$nc(this->timer)->stop();
		$set(this, timer, nullptr);
	}
}

void BasicTableUI$Handler::actionPerformed($ActionEvent* ae) {
	$nc(this->this$0->table)->editCellAt(this->pressedRow, this->pressedCol, nullptr);
	$var($Component, editorComponent, $nc(this->this$0->table)->getEditorComponent());
	if (editorComponent != nullptr && !editorComponent->hasFocus()) {
		$SwingUtilities2::compositeRequestFocus(editorComponent);
	}
	return;
}

void BasicTableUI$Handler::maybeStartTimer() {
	if (!this->shouldStartTimer) {
		return;
	}
	if (this->timer == nullptr) {
		$set(this, timer, $new($Timer, 1200, this));
		$nc(this->timer)->setRepeats(false);
	}
	$nc(this->timer)->start();
}

void BasicTableUI$Handler::mouseReleased($MouseEvent* e) {
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->table)) {
		return;
	}
	if ($nc(this->this$0->table)->getDragEnabled()) {
		mouseReleasedDND(e);
	} else if (this->this$0->isFileList) {
		maybeStartTimer();
	}
	$set(this, pressedEvent, nullptr);
	repostEvent(e);
	$set(this, dispatchComponent, nullptr);
	setValueIsAdjusting(false);
}

void BasicTableUI$Handler::mouseReleasedDND($MouseEvent* e) {
	$var($MouseEvent, me, $DragRecognitionSupport::mouseReleased(e));
	if (me != nullptr) {
		$SwingUtilities2::adjustFocus(this->this$0->table);
		if (!this->dragPressDidSelection) {
			adjustSelection(me);
		}
	}
	if (!this->dragStarted) {
		if (this->this$0->isFileList) {
			maybeStartTimer();
			return;
		}
		$var($Point, p, $nc(e)->getPoint());
		bool var$1 = this->pressedEvent != nullptr && $nc(this->this$0->table)->rowAtPoint(p) == this->pressedRow;
		bool var$0 = var$1 && $nc(this->this$0->table)->columnAtPoint(p) == this->pressedCol;
		if (var$0 && $nc(this->this$0->table)->editCellAt(this->pressedRow, this->pressedCol, this->pressedEvent)) {
			setDispatchComponent(this->pressedEvent);
			repostEvent(this->pressedEvent);
			$var($CellEditor, ce, $nc(this->this$0->table)->getCellEditor());
			if (ce != nullptr) {
				ce->shouldSelectCell(this->pressedEvent);
			}
		}
	}
}

void BasicTableUI$Handler::mouseEntered($MouseEvent* e) {
}

void BasicTableUI$Handler::mouseExited($MouseEvent* e) {
}

void BasicTableUI$Handler::mouseMoved($MouseEvent* e) {
}

void BasicTableUI$Handler::dragStarting($MouseEvent* me) {
	this->dragStarted = true;
	if ($BasicGraphicsUtils::isMenuShortcutKeyDown(me) && this->this$0->isFileList) {
		$nc($($nc(this->this$0->table)->getSelectionModel()))->addSelectionInterval(this->pressedRow, this->pressedRow);
		$nc($($nc($($nc(this->this$0->table)->getColumnModel()))->getSelectionModel()))->addSelectionInterval(this->pressedCol, this->pressedCol);
	}
	$set(this, pressedEvent, nullptr);
}

void BasicTableUI$Handler::mouseDragged($MouseEvent* e) {
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->table)) {
		return;
	}
	bool var$0 = $nc(this->this$0->table)->getDragEnabled();
	if (var$0 && ($DragRecognitionSupport::mouseDragged(e, this) || this->dragStarted)) {
		return;
	}
	repostEvent(e);
	if (this->this$0->isFileList || $nc(this->this$0->table)->isEditing()) {
		return;
	}
	$var($Point, p, $nc(e)->getPoint());
	int32_t row = $nc(this->this$0->table)->rowAtPoint(p);
	int32_t column = $nc(this->this$0->table)->columnAtPoint(p);
	if ((column == -1) || (row == -1)) {
		return;
	}
	$nc(this->this$0->table)->changeSelection(row, column, $BasicGraphicsUtils::isMenuShortcutKeyDown(e), true);
}

void BasicTableUI$Handler::propertyChange($PropertyChangeEvent* event) {
	$var($String, changeName, $nc(event)->getPropertyName());
	if ("componentOrientation"_s == changeName) {
		$var($InputMap, inputMap, this->this$0->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
		$SwingUtilities::replaceUIInputMap(this->this$0->table, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, inputMap);
		$var($JTableHeader, header, $nc(this->this$0->table)->getTableHeader());
		if (header != nullptr) {
			header->setComponentOrientation($cast($ComponentOrientation, $(event->getNewValue())));
		}
	} else if ("dropLocation"_s == changeName) {
		$var($JTable$DropLocation, oldValue, $cast($JTable$DropLocation, event->getOldValue()));
		repaintDropLocation(oldValue);
		repaintDropLocation($($nc(this->this$0->table)->getDropLocation()));
	} else if ("Table.isFileList"_s == changeName) {
		$init($Boolean);
		this->this$0->isFileList = $nc($Boolean::TRUE)->equals($($nc(this->this$0->table)->getClientProperty("Table.isFileList"_s)));
		$nc(this->this$0->table)->revalidate();
		$nc(this->this$0->table)->repaint();
		if (this->this$0->isFileList) {
			$nc($($nc(this->this$0->table)->getSelectionModel()))->addListSelectionListener($(this->this$0->getHandler()));
		} else {
			$nc($($nc(this->this$0->table)->getSelectionModel()))->removeListSelectionListener($(this->this$0->getHandler()));
			$set(this, timer, nullptr);
		}
	} else if ("selectionModel"_s == changeName) {
		if (this->this$0->isFileList) {
			$var($ListSelectionModel, old, $cast($ListSelectionModel, event->getOldValue()));
			$nc(old)->removeListSelectionListener($(this->this$0->getHandler()));
			$nc($($nc(this->this$0->table)->getSelectionModel()))->addListSelectionListener($(this->this$0->getHandler()));
		}
	}
}

void BasicTableUI$Handler::repaintDropLocation($JTable$DropLocation* loc) {
	if (loc == nullptr) {
		return;
	}
	bool var$0 = !$nc(loc)->isInsertRow();
	if (var$0 && !loc->isInsertColumn()) {
		int32_t var$1 = loc->getRow();
		$var($Rectangle, rect, $nc(this->this$0->table)->getCellRect(var$1, loc->getColumn(), false));
		if (rect != nullptr) {
			$nc(this->this$0->table)->repaint(rect);
		}
		return;
	}
	if ($nc(loc)->isInsertRow()) {
		$var($Rectangle, rect, this->this$0->extendRect($(this->this$0->getHDropLineRect(loc)), true));
		if (rect != nullptr) {
			$nc(this->this$0->table)->repaint(rect);
		}
	}
	if ($nc(loc)->isInsertColumn()) {
		$var($Rectangle, rect, this->this$0->extendRect($(this->this$0->getVDropLineRect(loc)), false));
		if (rect != nullptr) {
			$nc(this->this$0->table)->repaint(rect);
		}
	}
}

BasicTableUI$Handler::BasicTableUI$Handler() {
}

$Class* BasicTableUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicTableUI$Handler, name, initialize, &_BasicTableUI$Handler_ClassInfo_, allocate$BasicTableUI$Handler);
	return class$;
}

$Class* BasicTableUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax