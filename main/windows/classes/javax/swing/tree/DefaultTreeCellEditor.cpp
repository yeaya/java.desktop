#include <javax/swing/tree/DefaultTreeCellEditor.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <javax/swing/CellEditor.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/CellEditorListener.h>
#include <javax/swing/event/TreeSelectionEvent.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/tree/DefaultTreeCellEditor$1.h>
#include <javax/swing/tree/DefaultTreeCellEditor$DefaultTextField.h>
#include <javax/swing/tree/DefaultTreeCellEditor$EditorContainer.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <javax/swing/tree/TreeModel.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $CellEditorListenerArray = $Array<::javax::swing::event::CellEditorListener>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $AbstractCellEditor = ::javax::swing::AbstractCellEditor;
using $CellEditor = ::javax::swing::CellEditor;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $Icon = ::javax::swing::Icon;
using $JLabel = ::javax::swing::JLabel;
using $JTextField = ::javax::swing::JTextField;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $CellEditorListener = ::javax::swing::event::CellEditorListener;
using $TreeSelectionEvent = ::javax::swing::event::TreeSelectionEvent;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $DefaultTreeCellEditor$1 = ::javax::swing::tree::DefaultTreeCellEditor$1;
using $DefaultTreeCellEditor$DefaultTextField = ::javax::swing::tree::DefaultTreeCellEditor$DefaultTextField;
using $DefaultTreeCellEditor$EditorContainer = ::javax::swing::tree::DefaultTreeCellEditor$EditorContainer;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;
using $TreeCellEditor = ::javax::swing::tree::TreeCellEditor;
using $TreeModel = ::javax::swing::tree::TreeModel;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _DefaultTreeCellEditor_FieldInfo_[] = {
	{"realEditor", "Ljavax/swing/tree/TreeCellEditor;", nullptr, $PROTECTED, $field(DefaultTreeCellEditor, realEditor)},
	{"renderer", "Ljavax/swing/tree/DefaultTreeCellRenderer;", nullptr, $PROTECTED, $field(DefaultTreeCellEditor, renderer)},
	{"editingContainer", "Ljava/awt/Container;", nullptr, $PROTECTED, $field(DefaultTreeCellEditor, editingContainer)},
	{"editingComponent", "Ljava/awt/Component;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellEditor, editingComponent)},
	{"canEdit", "Z", nullptr, $PROTECTED, $field(DefaultTreeCellEditor, canEdit)},
	{"offset", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellEditor, offset)},
	{"tree", "Ljavax/swing/JTree;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellEditor, tree)},
	{"lastPath", "Ljavax/swing/tree/TreePath;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellEditor, lastPath)},
	{"timer", "Ljavax/swing/Timer;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellEditor, timer)},
	{"lastRow", "I", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellEditor, lastRow)},
	{"borderSelectionColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(DefaultTreeCellEditor, borderSelectionColor)},
	{"editingIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED | $TRANSIENT, $field(DefaultTreeCellEditor, editingIcon)},
	{"font", "Ljava/awt/Font;", nullptr, $PROTECTED, $field(DefaultTreeCellEditor, font)},
	{}
};

$MethodInfo _DefaultTreeCellEditor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JTree;Ljavax/swing/tree/DefaultTreeCellRenderer;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellEditor::*)($JTree*,$DefaultTreeCellRenderer*)>(&DefaultTreeCellEditor::init$))},
	{"<init>", "(Ljavax/swing/JTree;Ljavax/swing/tree/DefaultTreeCellRenderer;Ljavax/swing/tree/TreeCellEditor;)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultTreeCellEditor::*)($JTree*,$DefaultTreeCellRenderer*,$TreeCellEditor*)>(&DefaultTreeCellEditor::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{"addCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"canEditImmediately", "(Ljava/util/EventObject;)Z", nullptr, $PROTECTED},
	{"cancelCellEditing", "()V", nullptr, $PUBLIC},
	{"cleanupAfterEditing", "()V", nullptr, $PRIVATE, $method(static_cast<void(DefaultTreeCellEditor::*)()>(&DefaultTreeCellEditor::cleanupAfterEditing))},
	{"createContainer", "()Ljava/awt/Container;", nullptr, $PROTECTED},
	{"createTreeCellEditor", "()Ljavax/swing/tree/TreeCellEditor;", nullptr, $PROTECTED},
	{"determineOffset", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZI)V", nullptr, $PROTECTED},
	{"getBorderSelectionColor", "()Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getCellEditorListeners", "()[Ljavax/swing/event/CellEditorListener;", nullptr, $PUBLIC},
	{"getCellEditorValue", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getTreeCellEditorComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZI)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"inHitRegion", "(II)Z", nullptr, $PROTECTED},
	{"isCellEditable", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"prepareForEditing", "()V", nullptr, $PROTECTED},
	{"removeCellEditorListener", "(Ljavax/swing/event/CellEditorListener;)V", nullptr, $PUBLIC},
	{"setBorderSelectionColor", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
	{"setTree", "(Ljavax/swing/JTree;)V", nullptr, $PROTECTED},
	{"shouldSelectCell", "(Ljava/util/EventObject;)Z", nullptr, $PUBLIC},
	{"shouldStartEditingTimer", "(Ljava/util/EventObject;)Z", nullptr, $PROTECTED},
	{"startEditingTimer", "()V", nullptr, $PROTECTED},
	{"stopCellEditing", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueChanged", "(Ljavax/swing/event/TreeSelectionEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultTreeCellEditor_InnerClassesInfo_[] = {
	{"javax.swing.tree.DefaultTreeCellEditor$EditorContainer", "javax.swing.tree.DefaultTreeCellEditor", "EditorContainer", $PUBLIC},
	{"javax.swing.tree.DefaultTreeCellEditor$DefaultTextField", "javax.swing.tree.DefaultTreeCellEditor", "DefaultTextField", $PUBLIC},
	{"javax.swing.tree.DefaultTreeCellEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultTreeCellEditor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.tree.DefaultTreeCellEditor",
	"java.lang.Object",
	"java.awt.event.ActionListener,javax.swing.tree.TreeCellEditor,javax.swing.event.TreeSelectionListener",
	_DefaultTreeCellEditor_FieldInfo_,
	_DefaultTreeCellEditor_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultTreeCellEditor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.tree.DefaultTreeCellEditor$EditorContainer,javax.swing.tree.DefaultTreeCellEditor$DefaultTextField,javax.swing.tree.DefaultTreeCellEditor$1"
};

$Object* allocate$DefaultTreeCellEditor($Class* clazz) {
	return $of($alloc(DefaultTreeCellEditor));
}

int32_t DefaultTreeCellEditor::hashCode() {
	 return this->$ActionListener::hashCode();
}

bool DefaultTreeCellEditor::equals(Object$* arg0) {
	 return this->$ActionListener::equals(arg0);
}

$Object* DefaultTreeCellEditor::clone() {
	 return this->$ActionListener::clone();
}

$String* DefaultTreeCellEditor::toString() {
	 return this->$ActionListener::toString();
}

void DefaultTreeCellEditor::finalize() {
	this->$ActionListener::finalize();
}

void DefaultTreeCellEditor::init$($JTree* tree, $DefaultTreeCellRenderer* renderer) {
	DefaultTreeCellEditor::init$(tree, renderer, nullptr);
}

void DefaultTreeCellEditor::init$($JTree* tree, $DefaultTreeCellRenderer* renderer, $TreeCellEditor* editor) {
	$set(this, renderer, renderer);
	$set(this, realEditor, editor);
	if (this->realEditor == nullptr) {
		$set(this, realEditor, createTreeCellEditor());
	}
	$set(this, editingContainer, createContainer());
	setTree(tree);
	setBorderSelectionColor($($UIManager::getColor("Tree.editorBorderSelectionColor"_s)));
}

void DefaultTreeCellEditor::setBorderSelectionColor($Color* newColor) {
	$set(this, borderSelectionColor, newColor);
}

$Color* DefaultTreeCellEditor::getBorderSelectionColor() {
	return this->borderSelectionColor;
}

void DefaultTreeCellEditor::setFont($Font* font) {
	$set(this, font, font);
}

$Font* DefaultTreeCellEditor::getFont() {
	return this->font;
}

$Component* DefaultTreeCellEditor::getTreeCellEditorComponent($JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row) {
	setTree(tree);
	this->lastRow = row;
	determineOffset(tree, value, isSelected, expanded, leaf, row);
	if (this->editingComponent != nullptr) {
		$nc(this->editingContainer)->remove(this->editingComponent);
	}
	$set(this, editingComponent, $nc(this->realEditor)->getTreeCellEditorComponent(tree, value, isSelected, expanded, leaf, row));
	$var($TreePath, newPath, $nc(tree)->getPathForRow(row));
	this->canEdit = (this->lastPath != nullptr && newPath != nullptr && $nc(this->lastPath)->equals(newPath));
	$var($Font, font, getFont());
	if (font == nullptr) {
		if (this->renderer != nullptr) {
			$assign(font, $nc(this->renderer)->getFont());
		}
		if (font == nullptr) {
			$assign(font, tree->getFont());
		}
	}
	$nc(this->editingContainer)->setFont(font);
	prepareForEditing();
	return this->editingContainer;
}

$Object* DefaultTreeCellEditor::getCellEditorValue() {
	return $of($nc(this->realEditor)->getCellEditorValue());
}

bool DefaultTreeCellEditor::isCellEditable($EventObject* event) {
	bool retValue = false;
	bool editable = false;
	if (event != nullptr) {
		if ($instanceOf($JTree, $(event->getSource()))) {
			setTree($cast($JTree, $(event->getSource())));
			if ($instanceOf($MouseEvent, event)) {
				int32_t var$0 = $nc(($cast($MouseEvent, event)))->getX();
				$var($TreePath, path, $nc(this->tree)->getPathForLocation(var$0, ($cast($MouseEvent, event))->getY()));
				editable = (this->lastPath != nullptr && path != nullptr && $nc(this->lastPath)->equals(path));
				if (path != nullptr) {
					this->lastRow = $nc(this->tree)->getRowForPath(path);
					$var($Object, value, path->getLastPathComponent());
					bool isSelected = $nc(this->tree)->isRowSelected(this->lastRow);
					bool expanded = $nc(this->tree)->isExpanded(path);
					$var($TreeModel, treeModel, $nc(this->tree)->getModel());
					bool leaf = $nc(treeModel)->isLeaf(value);
					determineOffset(this->tree, value, isSelected, expanded, leaf, this->lastRow);
				}
			}
		}
	}
	if (!$nc(this->realEditor)->isCellEditable(event)) {
		return false;
	}
	if (canEditImmediately(event)) {
		retValue = true;
	} else if (editable && shouldStartEditingTimer(event)) {
		startEditingTimer();
	} else if (this->timer != nullptr && $nc(this->timer)->isRunning()) {
		$nc(this->timer)->stop();
	}
	if (retValue) {
		prepareForEditing();
	}
	return retValue;
}

bool DefaultTreeCellEditor::shouldSelectCell($EventObject* event) {
	return $nc(this->realEditor)->shouldSelectCell(event);
}

bool DefaultTreeCellEditor::stopCellEditing() {
	if ($nc(this->realEditor)->stopCellEditing()) {
		cleanupAfterEditing();
		return true;
	}
	return false;
}

void DefaultTreeCellEditor::cancelCellEditing() {
	$nc(this->realEditor)->cancelCellEditing();
	cleanupAfterEditing();
}

void DefaultTreeCellEditor::addCellEditorListener($CellEditorListener* l) {
	$nc(this->realEditor)->addCellEditorListener(l);
}

void DefaultTreeCellEditor::removeCellEditorListener($CellEditorListener* l) {
	$nc(this->realEditor)->removeCellEditorListener(l);
}

$CellEditorListenerArray* DefaultTreeCellEditor::getCellEditorListeners() {
	return $nc(($cast($DefaultCellEditor, this->realEditor)))->getCellEditorListeners();
}

void DefaultTreeCellEditor::valueChanged($TreeSelectionEvent* e) {
	if (this->tree != nullptr) {
		if ($nc(this->tree)->getSelectionCount() == 1) {
			$set(this, lastPath, $nc(this->tree)->getSelectionPath());
		} else {
			$set(this, lastPath, nullptr);
		}
	}
	if (this->timer != nullptr) {
		$nc(this->timer)->stop();
	}
}

void DefaultTreeCellEditor::actionPerformed($ActionEvent* e) {
	if (this->tree != nullptr && this->lastPath != nullptr) {
		$nc(this->tree)->startEditingAtPath(this->lastPath);
	}
}

void DefaultTreeCellEditor::setTree($JTree* newTree) {
	if (this->tree != newTree) {
		if (this->tree != nullptr) {
			$nc(this->tree)->removeTreeSelectionListener(this);
		}
		$set(this, tree, newTree);
		if (this->tree != nullptr) {
			$nc(this->tree)->addTreeSelectionListener(this);
		}
		if (this->timer != nullptr) {
			$nc(this->timer)->stop();
		}
	}
}

bool DefaultTreeCellEditor::shouldStartEditingTimer($EventObject* event) {
	if (($instanceOf($MouseEvent, event)) && $SwingUtilities::isLeftMouseButton($cast($MouseEvent, event))) {
		$var($MouseEvent, me, $cast($MouseEvent, event));
		bool var$0 = $nc(me)->getClickCount() == 1;
		if (var$0) {
			int32_t var$1 = me->getX();
			var$0 = inHitRegion(var$1, me->getY());
		}
		return (var$0);
	}
	return false;
}

void DefaultTreeCellEditor::startEditingTimer() {
	if (this->timer == nullptr) {
		$set(this, timer, $new($Timer, 1200, this));
		$nc(this->timer)->setRepeats(false);
	}
	$nc(this->timer)->start();
}

bool DefaultTreeCellEditor::canEditImmediately($EventObject* event) {
	if (($instanceOf($MouseEvent, event)) && $SwingUtilities::isLeftMouseButton($cast($MouseEvent, event))) {
		$var($MouseEvent, me, $cast($MouseEvent, event));
		bool var$0 = ($nc(me)->getClickCount() > 2);
		if (var$0) {
			int32_t var$1 = me->getX();
			var$0 = inHitRegion(var$1, me->getY());
		}
		return (var$0);
	}
	return (event == nullptr);
}

bool DefaultTreeCellEditor::inHitRegion(int32_t x, int32_t y) {
	if (this->lastRow != -1 && this->tree != nullptr) {
		$var($Rectangle, bounds, $nc(this->tree)->getRowBounds(this->lastRow));
		$var($ComponentOrientation, treeOrientation, $nc(this->tree)->getComponentOrientation());
		if ($nc(treeOrientation)->isLeftToRight()) {
			if (bounds != nullptr && x <= (bounds->x + this->offset) && this->offset < (bounds->width - 5)) {
				return false;
			}
		} else if (bounds != nullptr && (x >= (bounds->x + bounds->width - this->offset + 5) || x <= (bounds->x + 5)) && this->offset < (bounds->width - 5)) {
			return false;
		}
	}
	return true;
}

void DefaultTreeCellEditor::determineOffset($JTree* tree, Object$* value, bool isSelected, bool expanded, bool leaf, int32_t row) {
	if (this->renderer != nullptr) {
		if (leaf) {
			$set(this, editingIcon, $nc(this->renderer)->getLeafIcon());
		} else if (expanded) {
			$set(this, editingIcon, $nc(this->renderer)->getOpenIcon());
		} else {
			$set(this, editingIcon, $nc(this->renderer)->getClosedIcon());
		}
		if (this->editingIcon != nullptr) {
			int32_t var$0 = $nc(this->renderer)->getIconTextGap();
			this->offset = var$0 + $nc(this->editingIcon)->getIconWidth();
		} else {
			this->offset = $nc(this->renderer)->getIconTextGap();
		}
	} else {
		$set(this, editingIcon, nullptr);
		this->offset = 0;
	}
}

void DefaultTreeCellEditor::prepareForEditing() {
	if (this->editingComponent != nullptr) {
		$nc(this->editingContainer)->add(this->editingComponent);
	}
}

$Container* DefaultTreeCellEditor::createContainer() {
	return $new($DefaultTreeCellEditor$EditorContainer, this);
}

$TreeCellEditor* DefaultTreeCellEditor::createTreeCellEditor() {
	$var($Border, aBorder, $UIManager::getBorder("Tree.editorBorder"_s));
	$var($DefaultCellEditor, editor, $new($DefaultTreeCellEditor$1, this, $$new($DefaultTreeCellEditor$DefaultTextField, this, aBorder)));
	editor->setClickCountToStart(1);
	return editor;
}

void DefaultTreeCellEditor::cleanupAfterEditing() {
	if (this->editingComponent != nullptr) {
		$nc(this->editingContainer)->remove(this->editingComponent);
	}
	$set(this, editingComponent, nullptr);
}

DefaultTreeCellEditor::DefaultTreeCellEditor() {
}

$Class* DefaultTreeCellEditor::load$($String* name, bool initialize) {
	$loadClass(DefaultTreeCellEditor, name, initialize, &_DefaultTreeCellEditor_ClassInfo_, allocate$DefaultTreeCellEditor);
	return class$;
}

$Class* DefaultTreeCellEditor::class$ = nullptr;

		} // tree
	} // swing
} // javax