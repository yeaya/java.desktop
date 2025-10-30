#include <javax/swing/plaf/basic/BasicTreeUI$Handler.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Math.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree$DropLocation.h>
#include <javax/swing/JTree.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/ChangeEvent.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <javax/swing/event/TreeModelEvent.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport.h>
#include <javax/swing/text/Position$Bias.h>
#include <javax/swing/tree/AbstractLayoutCache.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <javax/swing/tree/TreeCellRenderer.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <javax/swing/tree/TreeSelectionModel.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ANCHOR_SELECTION_PATH_PROPERTY
#undef CELL_EDITOR_PROPERTY
#undef CELL_RENDERER_PROPERTY
#undef EDITABLE_PROPERTY
#undef LARGE_MODEL_PROPERTY
#undef LEAD_SELECTION_PATH_PROPERTY
#undef ROOT_VISIBLE_PROPERTY
#undef ROW_HEIGHT_PROPERTY
#undef SELECTION_MODEL_PROPERTY
#undef SHOWS_ROOT_HANDLES_PROPERTY
#undef TREE_MODEL_PROPERTY
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $FocusListener = ::java::awt::event::FocusListener;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $KeyListener = ::java::awt::event::KeyListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JTree = ::javax::swing::JTree;
using $JTree$DropLocation = ::javax::swing::JTree$DropLocation;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;
using $TreeExpansionListener = ::javax::swing::event::TreeExpansionListener;
using $TreeModelEvent = ::javax::swing::event::TreeModelEvent;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $DragRecognitionSupport = ::javax::swing::plaf::basic::DragRecognitionSupport;
using $DragRecognitionSupport$BeforeDrag = ::javax::swing::plaf::basic::DragRecognitionSupport$BeforeDrag;
using $Position$Bias = ::javax::swing::text::Position$Bias;
using $AbstractLayoutCache = ::javax::swing::tree::AbstractLayoutCache;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;
using $TreeCellRenderer = ::javax::swing::tree::TreeCellRenderer;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;
using $TreeSelectionModel = ::javax::swing::tree::TreeSelectionModel;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTreeUI$Handler_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicTreeUI$Handler, this$0)},
	{"prefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicTreeUI$Handler, prefix)},
	{"typedString", "Ljava/lang/String;", nullptr, $PRIVATE, $field(BasicTreeUI$Handler, typedString)},
	{"lastTime", "J", nullptr, $PRIVATE, $field(BasicTreeUI$Handler, lastTime)},
	{"dragPressDidSelection", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$Handler, dragPressDidSelection)},
	{"dragStarted", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$Handler, dragStarted)},
	{"pressedPath", "Ljavax/swing/tree/TreePath;", nullptr, $PRIVATE, $field(BasicTreeUI$Handler, pressedPath)},
	{"pressedEvent", "Ljava/awt/event/MouseEvent;", nullptr, $PRIVATE, $field(BasicTreeUI$Handler, pressedEvent)},
	{"valueChangedOnPress", "Z", nullptr, $PRIVATE, $field(BasicTreeUI$Handler, valueChangedOnPress)},
	{}
};

$MethodInfo _BasicTreeUI$Handler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/plaf/basic/BasicTreeUI;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Handler::*)($BasicTreeUI*)>(&BasicTreeUI$Handler::init$))},
	{"dragStarting", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"editingCanceled", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"editingStopped", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{"handleSelection", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0},
	{"isActualPath", "(Ljavax/swing/tree/TreePath;II)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTreeUI$Handler::*)($TreePath*,int32_t,int32_t)>(&BasicTreeUI$Handler::isActualPath))},
	{"isNavigationKey", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTreeUI$Handler::*)($KeyEvent*)>(&BasicTreeUI$Handler::isNavigationKey))},
	{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyReleased", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"keyTyped", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseDragged", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mousePressedDND", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Handler::*)($MouseEvent*)>(&BasicTreeUI$Handler::mousePressedDND))},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{"mouseReleasedDND", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Handler::*)($MouseEvent*)>(&BasicTreeUI$Handler::mouseReleasedDND))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"repaintDropLocation", "(Ljavax/swing/JTree$DropLocation;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTreeUI$Handler::*)($JTree$DropLocation*)>(&BasicTreeUI$Handler::repaintDropLocation))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC},
	{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC},
	{"treeNodesChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesInserted", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeNodesRemoved", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"treeStructureChanged", "(Ljavax/swing/event/TreeModelEvent;)V", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTreeUI$Handler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTreeUI$Handler", "javax.swing.plaf.basic.BasicTreeUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag", "javax.swing.plaf.basic.DragRecognitionSupport", "BeforeDrag", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _BasicTreeUI$Handler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTreeUI$Handler",
	"java.lang.Object",
	"javax.swing.event.CellEditorListener,java.awt.event.FocusListener,java.awt.event.KeyListener,java.awt.event.MouseListener,java.awt.event.MouseMotionListener,java.beans.PropertyChangeListener,javax.swing.event.TreeExpansionListener,javax.swing.event.TreeModelListener,javax.swing.event.TreeSelectionListener,javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag",
	_BasicTreeUI$Handler_FieldInfo_,
	_BasicTreeUI$Handler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTreeUI$Handler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTreeUI"
};

$Object* allocate$BasicTreeUI$Handler($Class* clazz) {
	return $of($alloc(BasicTreeUI$Handler));
}

int32_t BasicTreeUI$Handler::hashCode() {
	 return this->$CellEditorListener::hashCode();
}

bool BasicTreeUI$Handler::equals(Object$* arg0) {
	 return this->$CellEditorListener::equals(arg0);
}

$Object* BasicTreeUI$Handler::clone() {
	 return this->$CellEditorListener::clone();
}

$String* BasicTreeUI$Handler::toString() {
	 return this->$CellEditorListener::toString();
}

void BasicTreeUI$Handler::finalize() {
	this->$CellEditorListener::finalize();
}

void BasicTreeUI$Handler::init$($BasicTreeUI* this$0) {
	$set(this, this$0, this$0);
	$set(this, prefix, ""_s);
	$set(this, typedString, ""_s);
	this->lastTime = 0;
}

void BasicTreeUI$Handler::keyTyped($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	bool var$1 = this->this$0->tree != nullptr && $nc(this->this$0->tree)->getRowCount() > 0;
	bool var$0 = var$1 && $nc(this->this$0->tree)->hasFocus();
	if (var$0 && $nc(this->this$0->tree)->isEnabled()) {
		bool var$3 = $nc(e)->isAltDown();
		bool var$2 = var$3 || $BasicGraphicsUtils::isMenuShortcutKeyDown(e);
		if (var$2 || isNavigationKey(e)) {
			return;
		}
		bool startingFromSelection = true;
		char16_t c = $nc(e)->getKeyChar();
		int64_t time = e->getWhen();
		int32_t startingRow = $nc(this->this$0->tree)->getLeadSelectionRow();
		if (time - this->lastTime < this->this$0->timeFactor) {
			$plusAssignField(this, typedString, c);
			bool var$4 = ($nc(this->prefix)->length() == 1);
			if (var$4 && (c == $nc(this->prefix)->charAt(0))) {
				++startingRow;
			} else {
				$set(this, prefix, this->typedString);
			}
		} else {
			++startingRow;
			$set(this, typedString, $str({""_s, $$str(c)}));
			$set(this, prefix, this->typedString);
		}
		this->lastTime = time;
		if (startingRow < 0 || startingRow >= $nc(this->this$0->tree)->getRowCount()) {
			startingFromSelection = false;
			startingRow = 0;
		}
		$init($Position$Bias);
		$var($TreePath, path, $nc(this->this$0->tree)->getNextMatch(this->prefix, startingRow, $Position$Bias::Forward));
		if (path != nullptr) {
			$nc(this->this$0->tree)->setSelectionPath(path);
			int32_t row = this->this$0->getRowForPath(this->this$0->tree, path);
			this->this$0->ensureRowsAreVisible(row, row);
		} else if (startingFromSelection) {
			$assign(path, $nc(this->this$0->tree)->getNextMatch(this->prefix, 0, $Position$Bias::Forward));
			if (path != nullptr) {
				$nc(this->this$0->tree)->setSelectionPath(path);
				int32_t row = this->this$0->getRowForPath(this->this$0->tree, path);
				this->this$0->ensureRowsAreVisible(row, row);
			}
		}
	}
}

void BasicTreeUI$Handler::keyPressed($KeyEvent* e) {
	if (this->this$0->tree != nullptr && isNavigationKey(e)) {
		$set(this, prefix, ""_s);
		$set(this, typedString, ""_s);
		this->lastTime = 0;
	}
}

void BasicTreeUI$Handler::keyReleased($KeyEvent* e) {
}

bool BasicTreeUI$Handler::isNavigationKey($KeyEvent* event) {
	$useLocalCurrentObjectStackCache();
	$var($InputMap, inputMap, $nc(this->this$0->tree)->getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$var($KeyStroke, key, $KeyStroke::getKeyStrokeForEvent(event));
	return inputMap != nullptr && inputMap->get(key) != nullptr;
}

void BasicTreeUI$Handler::propertyChange($PropertyChangeEvent* event) {
	$useLocalCurrentObjectStackCache();
	if ($equals($nc(event)->getSource(), this->this$0->treeSelectionModel)) {
		$nc(this->this$0->treeSelectionModel)->resetRowSelection();
	} else if ($equals(event->getSource(), this->this$0->tree)) {
		$var($String, changeName, event->getPropertyName());
		$init($JTree);
		if (changeName == $JTree::LEAD_SELECTION_PATH_PROPERTY) {
			if (!this->this$0->ignoreLAChange) {
				this->this$0->updateLeadSelectionRow();
				this->this$0->repaintPath($cast($TreePath, $(event->getOldValue())));
				this->this$0->repaintPath($cast($TreePath, $(event->getNewValue())));
			}
		} else {
			if (changeName == $JTree::ANCHOR_SELECTION_PATH_PROPERTY) {
				if (!this->this$0->ignoreLAChange) {
					this->this$0->repaintPath($cast($TreePath, $(event->getOldValue())));
					this->this$0->repaintPath($cast($TreePath, $(event->getNewValue())));
				}
			}
		}
		if (changeName == $JTree::CELL_RENDERER_PROPERTY) {
			this->this$0->setCellRenderer($cast($TreeCellRenderer, $(event->getNewValue())));
			this->this$0->redoTheLayout();
		} else {
			if (changeName == $JTree::TREE_MODEL_PROPERTY) {
				this->this$0->setModel($cast($TreeModel, $(event->getNewValue())));
			} else {
				if (changeName == $JTree::ROOT_VISIBLE_PROPERTY) {
					this->this$0->setRootVisible($nc(($cast($Boolean, $(event->getNewValue()))))->booleanValue());
				} else {
					if (changeName == $JTree::SHOWS_ROOT_HANDLES_PROPERTY) {
						this->this$0->setShowsRootHandles($nc(($cast($Boolean, $(event->getNewValue()))))->booleanValue());
					} else {
						if (changeName == $JTree::ROW_HEIGHT_PROPERTY) {
							this->this$0->setRowHeight($nc(($cast($Integer, $(event->getNewValue()))))->intValue());
						} else {
							if (changeName == $JTree::CELL_EDITOR_PROPERTY) {
								this->this$0->setCellEditor($cast($TreeCellEditor, $(event->getNewValue())));
							} else {
								if (changeName == $JTree::EDITABLE_PROPERTY) {
									this->this$0->setEditable($nc(($cast($Boolean, $(event->getNewValue()))))->booleanValue());
								} else {
									if (changeName == $JTree::LARGE_MODEL_PROPERTY) {
										this->this$0->setLargeModel($nc(this->this$0->tree)->isLargeModel());
									} else {
										if (changeName == $JTree::SELECTION_MODEL_PROPERTY) {
											this->this$0->setSelectionModel($($nc(this->this$0->tree)->getSelectionModel()));
										} else if (changeName == "font"_s || $SwingUtilities2::isScaleChanged(event)) {
											this->this$0->completeEditing();
											if (this->this$0->treeState != nullptr) {
												$nc(this->this$0->treeState)->invalidateSizes();
											}
											this->this$0->updateSize();
										} else if (changeName == "componentOrientation"_s) {
											if (this->this$0->tree != nullptr) {
												this->this$0->leftToRight = $BasicGraphicsUtils::isLeftToRight(this->this$0->tree);
												this->this$0->redoTheLayout();
												$nc(this->this$0->tree)->treeDidChange();
												$var($InputMap, km, this->this$0->getInputMap($JComponent::WHEN_FOCUSED));
												$SwingUtilities::replaceUIInputMap(this->this$0->tree, $JComponent::WHEN_FOCUSED, km);
											}
										} else if ("dropLocation"_s == changeName) {
											$var($JTree$DropLocation, oldValue, $cast($JTree$DropLocation, event->getOldValue()));
											repaintDropLocation(oldValue);
											repaintDropLocation($($nc(this->this$0->tree)->getDropLocation()));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void BasicTreeUI$Handler::repaintDropLocation($JTree$DropLocation* loc) {
	$useLocalCurrentObjectStackCache();
	if (loc == nullptr) {
		return;
	}
	$var($Rectangle, r, nullptr);
	if (this->this$0->isDropLine(loc)) {
		$assign(r, this->this$0->getDropLineRect(loc));
	} else {
		$assign(r, $nc(this->this$0->tree)->getPathBounds($($nc(loc)->getPath())));
	}
	if (r != nullptr) {
		$nc(this->this$0->tree)->repaint(r);
	}
}

bool BasicTreeUI$Handler::isActualPath($TreePath* path, int32_t x, int32_t y) {
	if (path == nullptr) {
		return false;
	}
	$var($Rectangle, bounds, this->this$0->getPathBounds(this->this$0->tree, path));
	if (bounds == nullptr || y > ($nc(bounds)->y + bounds->height)) {
		return false;
	}
	return (x >= $nc(bounds)->x) && (x <= (bounds->x + bounds->width));
}

void BasicTreeUI$Handler::mouseClicked($MouseEvent* e) {
}

void BasicTreeUI$Handler::mouseEntered($MouseEvent* e) {
}

void BasicTreeUI$Handler::mouseExited($MouseEvent* e) {
}

void BasicTreeUI$Handler::mousePressed($MouseEvent* e) {
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->tree)) {
		return;
	}
	bool var$1 = this->this$0->isEditing(this->this$0->tree);
	bool var$0 = var$1 && $nc(this->this$0->tree)->getInvokesStopCellEditing();
	if (var$0 && !this->this$0->stopEditing(this->this$0->tree)) {
		return;
	}
	this->this$0->completeEditing();
	$var($JTree, var$2, this->this$0->tree);
	int32_t var$3 = $nc(e)->getX();
	$set(this, pressedPath, this->this$0->getClosestPathForLocation(var$2, var$3, e->getY()));
	if ($nc(this->this$0->tree)->getDragEnabled()) {
		mousePressedDND(e);
	} else {
		$SwingUtilities2::adjustFocus(this->this$0->tree);
		handleSelection(e);
	}
}

void BasicTreeUI$Handler::mousePressedDND($MouseEvent* e) {
	$set(this, pressedEvent, e);
	bool grabFocus = true;
	this->dragStarted = false;
	this->valueChangedOnPress = false;
	$var($TreePath, var$1, this->pressedPath);
	int32_t var$2 = $nc(e)->getX();
	bool var$0 = isActualPath(var$1, var$2, e->getY());
	if (var$0 && $DragRecognitionSupport::mousePressed(e)) {
		this->dragPressDidSelection = false;
		if ($BasicGraphicsUtils::isMenuShortcutKeyDown(e)) {
			return;
		} else {
			bool var$4 = !$nc(e)->isShiftDown();
			if (var$4 && $nc(this->this$0->tree)->isPathSelected(this->pressedPath)) {
				this->this$0->setAnchorSelectionPath(this->pressedPath);
				this->this$0->setLeadSelectionPath(this->pressedPath, true);
				return;
			}
		}
		this->dragPressDidSelection = true;
		grabFocus = false;
	}
	if (grabFocus) {
		$SwingUtilities2::adjustFocus(this->this$0->tree);
	}
	handleSelection(e);
}

void BasicTreeUI$Handler::handleSelection($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->pressedPath != nullptr) {
		$var($Rectangle, bounds, this->this$0->getPathBounds(this->this$0->tree, this->pressedPath));
		if (bounds == nullptr || $nc(e)->getY() >= ($nc(bounds)->y + bounds->height)) {
			return;
		}
		if ($SwingUtilities::isLeftMouseButton(e)) {
			$var($TreePath, var$0, this->pressedPath);
			int32_t var$1 = $nc(e)->getX();
			this->this$0->checkForClickInExpandControl(var$0, var$1, e->getY());
		}
		int32_t x = $nc(e)->getX();
		if (x >= $nc(bounds)->x && x < (bounds->x + bounds->width)) {
			bool var$2 = $nc(this->this$0->tree)->getDragEnabled();
			if (var$2 || !this->this$0->startEditing(this->pressedPath, e)) {
				this->this$0->selectPathForEvent(this->pressedPath, e);
			}
		}
	}
}

void BasicTreeUI$Handler::dragStarting($MouseEvent* me) {
	this->dragStarted = true;
	if ($BasicGraphicsUtils::isMenuShortcutKeyDown(me)) {
		$nc(this->this$0->tree)->addSelectionPath(this->pressedPath);
		this->this$0->setAnchorSelectionPath(this->pressedPath);
		this->this$0->setLeadSelectionPath(this->pressedPath, true);
	}
	$set(this, pressedEvent, nullptr);
	$set(this, pressedPath, nullptr);
}

void BasicTreeUI$Handler::mouseDragged($MouseEvent* e) {
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->tree)) {
		return;
	}
	if ($nc(this->this$0->tree)->getDragEnabled()) {
		$DragRecognitionSupport::mouseDragged(e, this);
	}
}

void BasicTreeUI$Handler::mouseMoved($MouseEvent* e) {
}

void BasicTreeUI$Handler::mouseReleased($MouseEvent* e) {
	if ($SwingUtilities2::shouldIgnore(e, this->this$0->tree)) {
		return;
	}
	if ($nc(this->this$0->tree)->getDragEnabled()) {
		mouseReleasedDND(e);
	}
	$set(this, pressedEvent, nullptr);
	$set(this, pressedPath, nullptr);
}

void BasicTreeUI$Handler::mouseReleasedDND($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($MouseEvent, me, $DragRecognitionSupport::mouseReleased(e));
	if (me != nullptr) {
		$SwingUtilities2::adjustFocus(this->this$0->tree);
		if (!this->dragPressDidSelection) {
			handleSelection(me);
		}
	}
	if (!this->dragStarted) {
		bool var$0 = this->pressedPath != nullptr && !this->valueChangedOnPress;
		if (var$0) {
			$var($TreePath, var$1, this->pressedPath);
			int32_t var$2 = $nc(this->pressedEvent)->getX();
			var$0 = isActualPath(var$1, var$2, $nc(this->pressedEvent)->getY());
		}
		if (var$0) {
			this->this$0->startEditingOnRelease(this->pressedPath, this->pressedEvent, e);
		}
	}
}

void BasicTreeUI$Handler::focusGained($FocusEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->tree != nullptr) {
		$var($Rectangle, pBounds, nullptr);
		$assign(pBounds, this->this$0->getPathBounds(this->this$0->tree, $($nc(this->this$0->tree)->getLeadSelectionPath())));
		if (pBounds != nullptr) {
			$nc(this->this$0->tree)->repaint($(this->this$0->getRepaintPathBounds(pBounds)));
		}
		$assign(pBounds, this->this$0->getPathBounds(this->this$0->tree, $(this->this$0->getLeadSelectionPath())));
		if (pBounds != nullptr) {
			$nc(this->this$0->tree)->repaint($(this->this$0->getRepaintPathBounds(pBounds)));
		}
	}
}

void BasicTreeUI$Handler::focusLost($FocusEvent* e) {
	focusGained(e);
}

void BasicTreeUI$Handler::editingStopped($ChangeEvent* e) {
	this->this$0->completeEditing(false, false, true);
}

void BasicTreeUI$Handler::editingCanceled($ChangeEvent* e) {
	this->this$0->completeEditing(false, false, false);
}

void BasicTreeUI$Handler::valueChanged($TreeSelectionEvent* event) {
	$useLocalCurrentObjectStackCache();
	this->valueChangedOnPress = true;
	this->this$0->completeEditing();
	if ($nc(this->this$0->tree)->getExpandsSelectedPaths() && this->this$0->treeSelectionModel != nullptr) {
		$var($TreePathArray, paths, $nc(this->this$0->treeSelectionModel)->getSelectionPaths());
		if (paths != nullptr) {
			for (int32_t counter = paths->length - 1; counter >= 0; --counter) {
				$var($TreePath, path, $nc(paths->get(counter))->getParentPath());
				bool expand = true;
				while (path != nullptr) {
					if ($nc(this->this$0->treeModel)->isLeaf($(path->getLastPathComponent()))) {
						expand = false;
						$assign(path, nullptr);
					} else {
						$assign(path, path->getParentPath());
					}
				}
				if (expand) {
					$nc(this->this$0->tree)->makeVisible(paths->get(counter));
				}
			}
		}
	}
	$var($TreePath, oldLead, this->this$0->getLeadSelectionPath());
	this->this$0->lastSelectedRow = $nc(this->this$0->tree)->getMinSelectionRow();
	$var($TreePath, lead, $nc($($nc(this->this$0->tree)->getSelectionModel()))->getLeadSelectionPath());
	this->this$0->setAnchorSelectionPath(lead);
	this->this$0->setLeadSelectionPath(lead);
	$var($TreePathArray, changedPaths, $nc(event)->getPaths());
	$var($Rectangle, nodeBounds, nullptr);
	$var($Rectangle, visRect, $nc(this->this$0->tree)->getVisibleRect());
	bool paintPaths = true;
	int32_t nWidth = $nc(this->this$0->tree)->getWidth();
	if (changedPaths != nullptr) {
		int32_t counter = 0;
		int32_t maxCounter = changedPaths->length;
		if (maxCounter > 4) {
			$nc(this->this$0->tree)->repaint();
			paintPaths = false;
		} else {
			for (counter = 0; counter < maxCounter; ++counter) {
				$assign(nodeBounds, this->this$0->getPathBounds(this->this$0->tree, changedPaths->get(counter)));
				if (nodeBounds != nullptr && $nc(visRect)->intersects(nodeBounds)) {
					$nc(this->this$0->tree)->repaint(0, nodeBounds->y, nWidth, nodeBounds->height);
				}
			}
		}
	}
	if (paintPaths) {
		$assign(nodeBounds, this->this$0->getPathBounds(this->this$0->tree, oldLead));
		if (nodeBounds != nullptr && $nc(visRect)->intersects(nodeBounds)) {
			$nc(this->this$0->tree)->repaint(0, nodeBounds->y, nWidth, nodeBounds->height);
		}
		$assign(nodeBounds, this->this$0->getPathBounds(this->this$0->tree, lead));
		if (nodeBounds != nullptr && $nc(visRect)->intersects(nodeBounds)) {
			$nc(this->this$0->tree)->repaint(0, nodeBounds->y, nWidth, nodeBounds->height);
		}
	}
}

void BasicTreeUI$Handler::treeExpanded($TreeExpansionEvent* event) {
	if (event != nullptr && this->this$0->tree != nullptr) {
		$var($TreePath, path, event->getPath());
		this->this$0->updateExpandedDescendants(path);
	}
}

void BasicTreeUI$Handler::treeCollapsed($TreeExpansionEvent* event) {
	if (event != nullptr && this->this$0->tree != nullptr) {
		$var($TreePath, path, event->getPath());
		this->this$0->completeEditing();
		if (path != nullptr && $nc(this->this$0->tree)->isVisible(path)) {
			$nc(this->this$0->treeState)->setExpandedState(path, false);
			this->this$0->updateLeadSelectionRow();
			this->this$0->updateSize();
		}
	}
}

void BasicTreeUI$Handler::treeNodesChanged($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->treeState != nullptr && e != nullptr) {
		$var($TreePath, parentPath, $SwingUtilities2::getTreePath(e, $(this->this$0->getModel())));
		$var($ints, indices, e->getChildIndices());
		if (indices == nullptr || $nc(indices)->length == 0) {
			$nc(this->this$0->treeState)->treeNodesChanged(e);
			this->this$0->updateSize();
		} else if ($nc(this->this$0->treeState)->isExpanded(parentPath)) {
			int32_t minIndex = indices->get(0);
			for (int32_t i = indices->length - 1; i > 0; --i) {
				minIndex = $Math::min(indices->get(i), minIndex);
			}
			$var($Object, minChild, $nc(this->this$0->treeModel)->getChild($($nc(parentPath)->getLastPathComponent()), minIndex));
			$var($TreePath, minPath, $nc(parentPath)->pathByAddingChild(minChild));
			$var($Rectangle, minBounds, this->this$0->getPathBounds(this->this$0->tree, minPath));
			$nc(this->this$0->treeState)->treeNodesChanged(e);
			this->this$0->updateSize0();
			$var($Rectangle, newMinBounds, this->this$0->getPathBounds(this->this$0->tree, minPath));
			if (minBounds == nullptr || newMinBounds == nullptr) {
				return;
			}
			if (indices->length == 1 && $nc(newMinBounds)->height == $nc(minBounds)->height) {
				$nc(this->this$0->tree)->repaint(0, minBounds->y, $nc(this->this$0->tree)->getWidth(), minBounds->height);
			} else {
				int32_t var$0 = minBounds->y;
				int32_t var$1 = $nc(this->this$0->tree)->getWidth();
				$nc(this->this$0->tree)->repaint(0, var$0, var$1, $nc(this->this$0->tree)->getHeight() - minBounds->y);
			}
		} else {
			$nc(this->this$0->treeState)->treeNodesChanged(e);
		}
	}
}

void BasicTreeUI$Handler::treeNodesInserted($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->treeState != nullptr && e != nullptr) {
		$nc(this->this$0->treeState)->treeNodesInserted(e);
		this->this$0->updateLeadSelectionRow();
		$var($TreePath, path, $SwingUtilities2::getTreePath(e, $(this->this$0->getModel())));
		if ($nc(this->this$0->treeState)->isExpanded(path)) {
			this->this$0->updateSize();
		} else {
			$var($ints, indices, e->getChildIndices());
			int32_t childCount = $nc(this->this$0->treeModel)->getChildCount($($nc(path)->getLastPathComponent()));
			if (indices != nullptr && (childCount - indices->length) == 0) {
				this->this$0->updateSize();
			}
		}
	}
}

void BasicTreeUI$Handler::treeNodesRemoved($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->treeState != nullptr && e != nullptr) {
		$nc(this->this$0->treeState)->treeNodesRemoved(e);
		this->this$0->updateLeadSelectionRow();
		$var($TreePath, path, $SwingUtilities2::getTreePath(e, $(this->this$0->getModel())));
		bool var$0 = $nc(this->this$0->treeState)->isExpanded(path);
		if (var$0 || $nc(this->this$0->treeModel)->getChildCount($($nc(path)->getLastPathComponent())) == 0) {
			this->this$0->updateSize();
		}
	}
}

void BasicTreeUI$Handler::treeStructureChanged($TreeModelEvent* e) {
	$useLocalCurrentObjectStackCache();
	if (this->this$0->treeState != nullptr && e != nullptr) {
		$nc(this->this$0->treeState)->treeStructureChanged(e);
		this->this$0->updateLeadSelectionRow();
		$var($TreePath, pPath, $SwingUtilities2::getTreePath(e, $(this->this$0->getModel())));
		if (pPath != nullptr) {
			$assign(pPath, pPath->getParentPath());
		}
		if (pPath == nullptr || $nc(this->this$0->treeState)->isExpanded(pPath)) {
			this->this$0->updateSize();
		}
	}
}

BasicTreeUI$Handler::BasicTreeUI$Handler() {
}

$Class* BasicTreeUI$Handler::load$($String* name, bool initialize) {
	$loadClass(BasicTreeUI$Handler, name, initialize, &_BasicTreeUI$Handler_ClassInfo_, allocate$BasicTreeUI$Handler);
	return class$;
}

$Class* BasicTreeUI$Handler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax