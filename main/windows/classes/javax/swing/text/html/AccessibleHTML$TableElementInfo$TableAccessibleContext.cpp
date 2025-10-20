#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext.h>

#include <java/awt/Color.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Locale.h>
#include <java/util/Vector.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleComponent.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/accessibility/AccessibleRole.h>
#include <javax/accessibility/AccessibleStateSet.h>
#include <javax/accessibility/AccessibleTable.h>
#include <javax/swing/JEditorPane.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/Document.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/View.h>
#include <javax/swing/text/html/AccessibleHTML$ElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$HTMLAccessibleContext.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML$TableElementInfo.h>
#include <javax/swing/text/html/AccessibleHTML.h>
#include <jcpp.h>

#undef TABLE

using $Color = ::java::awt::Color;
using $Cursor = ::java::awt::Cursor;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusListener = ::java::awt::event::FocusListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $Vector = ::java::util::Vector;
using $Accessible = ::javax::accessibility::Accessible;
using $AccessibleBundle = ::javax::accessibility::AccessibleBundle;
using $AccessibleComponent = ::javax::accessibility::AccessibleComponent;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AccessibleRole = ::javax::accessibility::AccessibleRole;
using $AccessibleStateSet = ::javax::accessibility::AccessibleStateSet;
using $AccessibleTable = ::javax::accessibility::AccessibleTable;
using $JEditorPane = ::javax::swing::JEditorPane;
using $BadLocationException = ::javax::swing::text::BadLocationException;
using $Document = ::javax::swing::text::Document;
using $Element = ::javax::swing::text::Element;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $View = ::javax::swing::text::View;
using $AccessibleHTML = ::javax::swing::text::html::AccessibleHTML;
using $AccessibleHTML$ElementInfo = ::javax::swing::text::html::AccessibleHTML$ElementInfo;
using $AccessibleHTML$HTMLAccessibleContext = ::javax::swing::text::html::AccessibleHTML$HTMLAccessibleContext;
using $AccessibleHTML$TableElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo;
using $AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable;
using $AccessibleHTML$TableElementInfo$TableCellElementInfo = ::javax::swing::text::html::AccessibleHTML$TableElementInfo$TableCellElementInfo;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _AccessibleHTML$TableElementInfo$TableAccessibleContext_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;", nullptr, $FINAL | $SYNTHETIC, $field(AccessibleHTML$TableElementInfo$TableAccessibleContext, this$1)},
	{"rowHeadersTable", "Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable;", nullptr, $PRIVATE, $field(AccessibleHTML$TableElementInfo$TableAccessibleContext, rowHeadersTable)},
	{}
};

$MethodInfo _AccessibleHTML$TableElementInfo$TableAccessibleContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/text/html/AccessibleHTML$TableElementInfo;Ljavax/swing/text/html/AccessibleHTML$ElementInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(AccessibleHTML$TableElementInfo$TableAccessibleContext::*)($AccessibleHTML$TableElementInfo*,$AccessibleHTML$ElementInfo*)>(&AccessibleHTML$TableElementInfo$TableAccessibleContext::init$))},
	{"addFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"addRowHeader", "(Ljavax/swing/text/html/AccessibleHTML$TableElementInfo$TableCellElementInfo;I)V", nullptr, $PUBLIC},
	{"contains", "(Ljava/awt/Point;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleAt", "(II)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleAt", "(Ljava/awt/Point;)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleCaption", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChild", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleChildrenCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleColumn", "(I)I", nullptr, $PUBLIC},
	{"getAccessibleColumnCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleColumnDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleColumnExtentAt", "(II)I", nullptr, $PUBLIC},
	{"getAccessibleColumnHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC},
	{"getAccessibleColumnHeader", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleComponent", "()Ljavax/accessibility/AccessibleComponent;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleDescription", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleIndex", "(II)I", nullptr, $PUBLIC},
	{"getAccessibleIndexInParent", "()I", nullptr, $PUBLIC},
	{"getAccessibleName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleRole", "()Ljavax/accessibility/AccessibleRole;", nullptr, $PUBLIC},
	{"getAccessibleRow", "(I)I", nullptr, $PUBLIC},
	{"getAccessibleRowCount", "()I", nullptr, $PUBLIC},
	{"getAccessibleRowDescription", "(I)Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleRowExtentAt", "(II)I", nullptr, $PUBLIC},
	{"getAccessibleRowHeader", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC},
	{"getAccessibleRowHeader", "(I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAccessibleStateSet", "()Ljavax/accessibility/AccessibleStateSet;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAccessibleSummary", "()Ljavax/accessibility/Accessible;", nullptr, $PUBLIC},
	{"getAccessibleTable", "()Ljavax/accessibility/AccessibleTable;", nullptr, $PUBLIC},
	{"getBackground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "java.awt.IllegalComponentStateException"},
	{"getLocation", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getSelectedAccessibleColumns", "()[I", nullptr, $PUBLIC},
	{"getSelectedAccessibleRows", "()[I", nullptr, $PUBLIC},
	{"getSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isAccessibleColumnSelected", "(I)Z", nullptr, $PUBLIC},
	{"isAccessibleRowSelected", "(I)Z", nullptr, $PUBLIC},
	{"isAccessibleSelected", "(II)Z", nullptr, $PUBLIC},
	{"isEnabled", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isShowing", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"isVisible", "()Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"removeFocusListener", "(Ljava/awt/event/FocusListener;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"requestFocus", "()V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setAccessibleCaption", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{"setAccessibleColumnDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{"setAccessibleColumnHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC},
	{"setAccessibleRowDescription", "(ILjavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{"setAccessibleRowHeader", "(Ljavax/accessibility/AccessibleTable;)V", nullptr, $PUBLIC},
	{"setAccessibleSummary", "(Ljavax/accessibility/Accessible;)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setEnabled", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setForeground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setLocation", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setSize", "(Ljava/awt/Dimension;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"setVisible", "(Z)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AccessibleHTML$TableElementInfo$TableAccessibleContext_InnerClassesInfo_[] = {
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo", "javax.swing.text.html.AccessibleHTML", "TableElementInfo", $PRIVATE},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext", "javax.swing.text.html.AccessibleHTML$TableElementInfo", "TableAccessibleContext", $PUBLIC},
	{"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext", "javax.swing.text.html.AccessibleHTML", "HTMLAccessibleContext", $PROTECTED | $ABSTRACT},
	{"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable", "javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext", "AccessibleHeadersTable", $PROTECTED},
	{}
};

$ClassInfo _AccessibleHTML$TableElementInfo$TableAccessibleContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.AccessibleHTML$TableElementInfo$TableAccessibleContext",
	"javax.swing.text.html.AccessibleHTML$HTMLAccessibleContext",
	"javax.accessibility.AccessibleTable",
	_AccessibleHTML$TableElementInfo$TableAccessibleContext_FieldInfo_,
	_AccessibleHTML$TableElementInfo$TableAccessibleContext_MethodInfo_,
	nullptr,
	nullptr,
	_AccessibleHTML$TableElementInfo$TableAccessibleContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.AccessibleHTML"
};

$Object* allocate$AccessibleHTML$TableElementInfo$TableAccessibleContext($Class* clazz) {
	return $of($alloc(AccessibleHTML$TableElementInfo$TableAccessibleContext));
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::hashCode() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::hashCode();
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::equals(Object$* arg0) {
	 return this->$AccessibleHTML$HTMLAccessibleContext::equals(arg0);
}

$Object* AccessibleHTML$TableElementInfo$TableAccessibleContext::clone() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::clone();
}

$String* AccessibleHTML$TableElementInfo$TableAccessibleContext::toString() {
	 return this->$AccessibleHTML$HTMLAccessibleContext::toString();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::finalize() {
	this->$AccessibleHTML$HTMLAccessibleContext::finalize();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::init$($AccessibleHTML$TableElementInfo* this$1, $AccessibleHTML$ElementInfo* elementInfo) {
	$set(this, this$1, this$1);
	$AccessibleHTML$HTMLAccessibleContext::init$(this$1->this$0, elementInfo);
}

$String* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleName() {
	return $nc($(getAccessibleRole()))->toString();
}

$String* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleDescription() {
	return $nc($nc(this->this$1->this$0)->editor)->getContentType();
}

$AccessibleRole* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleRole() {
	$init($AccessibleRole);
	return $AccessibleRole::TABLE;
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleIndexInParent() {
	return $nc(this->elementInfo)->getIndexInParent();
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleChildrenCount() {
	int32_t var$0 = $nc(($cast($AccessibleHTML$TableElementInfo, this->elementInfo)))->getRowCount();
	return var$0 * $nc(($cast($AccessibleHTML$TableElementInfo, this->elementInfo)))->getColumnCount();
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleChild(int32_t i) {
	int32_t rowCount = $nc(($cast($AccessibleHTML$TableElementInfo, this->elementInfo)))->getRowCount();
	int32_t columnCount = $nc(($cast($AccessibleHTML$TableElementInfo, this->elementInfo)))->getColumnCount();
	int32_t r = $div(i, rowCount);
	int32_t c = $mod(i, columnCount);
	if (r < 0 || r >= rowCount || c < 0 || c >= columnCount) {
		return nullptr;
	} else {
		return getAccessibleAt(r, c);
	}
}

$AccessibleTable* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleTable() {
	return this;
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleCaption() {
	$var($AccessibleHTML$ElementInfo, captionInfo, this->this$1->getCaptionInfo());
	if ($instanceOf($Accessible, captionInfo)) {
		return $cast($Accessible, this->this$1->caption);
	} else {
		return nullptr;
	}
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setAccessibleCaption($Accessible* a) {
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleSummary() {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setAccessibleSummary($Accessible* a) {
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleRowCount() {
	return $nc(($cast($AccessibleHTML$TableElementInfo, this->elementInfo)))->getRowCount();
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleColumnCount() {
	return $nc(($cast($AccessibleHTML$TableElementInfo, this->elementInfo)))->getColumnCount();
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleAt(int32_t r, int32_t c) {
	$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cellInfo, this->this$1->getCell(r, c));
	if (cellInfo != nullptr) {
		return cellInfo->getAccessible();
	} else {
		return nullptr;
	}
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleRowExtentAt(int32_t r, int32_t c) {
	return $nc(($cast($AccessibleHTML$TableElementInfo, this->elementInfo)))->getRowExtentAt(r, c);
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleColumnExtentAt(int32_t r, int32_t c) {
	return $nc(($cast($AccessibleHTML$TableElementInfo, this->elementInfo)))->getColumnExtentAt(r, c);
}

$AccessibleTable* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleRowHeader() {
	return this->rowHeadersTable;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setAccessibleRowHeader($AccessibleTable* table) {
}

$AccessibleTable* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleColumnHeader() {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setAccessibleColumnHeader($AccessibleTable* table) {
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleRowDescription(int32_t r) {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setAccessibleRowDescription(int32_t r, $Accessible* a) {
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleColumnDescription(int32_t c) {
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setAccessibleColumnDescription(int32_t c, $Accessible* a) {
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::isAccessibleSelected(int32_t r, int32_t c) {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->validateIfNecessary()) {
		bool var$0 = r < 0 || r >= getAccessibleRowCount() || c < 0;
		if (var$0 || c >= getAccessibleColumnCount()) {
			return false;
		}
		$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cell, this->this$1->getCell(r, c));
		if (cell != nullptr) {
			$var($Element, elem, cell->getElement());
			int32_t start = $nc(elem)->getStartOffset();
			int32_t end = elem->getEndOffset();
			bool var$1 = start >= $nc($nc(this->this$1->this$0)->editor)->getSelectionStart();
			return var$1 && end <= $nc($nc(this->this$1->this$0)->editor)->getSelectionEnd();
		}
	}
	return false;
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::isAccessibleRowSelected(int32_t r) {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->validateIfNecessary()) {
		if (r < 0 || r >= getAccessibleRowCount()) {
			return false;
		}
		int32_t nColumns = getAccessibleColumnCount();
		$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, startCell, this->this$1->getCell(r, 0));
		if (startCell == nullptr) {
			return false;
		}
		int32_t start = $nc($($nc(startCell)->getElement()))->getStartOffset();
		$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, endCell, this->this$1->getCell(r, nColumns - 1));
		if (endCell == nullptr) {
			return false;
		}
		int32_t end = $nc($($nc(endCell)->getElement()))->getEndOffset();
		bool var$0 = start >= $nc($nc(this->this$1->this$0)->editor)->getSelectionStart();
		return var$0 && end <= $nc($nc(this->this$1->this$0)->editor)->getSelectionEnd();
	}
	return false;
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::isAccessibleColumnSelected(int32_t c) {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->validateIfNecessary()) {
		if (c < 0 || c >= getAccessibleColumnCount()) {
			return false;
		}
		int32_t nRows = getAccessibleRowCount();
		$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, startCell, this->this$1->getCell(0, c));
		if (startCell == nullptr) {
			return false;
		}
		int32_t start = $nc($($nc(startCell)->getElement()))->getStartOffset();
		$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, endCell, this->this$1->getCell(nRows - 1, c));
		if (endCell == nullptr) {
			return false;
		}
		int32_t end = $nc($($nc(endCell)->getElement()))->getEndOffset();
		bool var$0 = start >= $nc($nc(this->this$1->this$0)->editor)->getSelectionStart();
		return var$0 && end <= $nc($nc(this->this$1->this$0)->editor)->getSelectionEnd();
	}
	return false;
}

$ints* AccessibleHTML$TableElementInfo$TableAccessibleContext::getSelectedAccessibleRows() {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->validateIfNecessary()) {
		int32_t nRows = getAccessibleRowCount();
		$var($Vector, vec, $new($Vector));
		for (int32_t i = 0; i < nRows; ++i) {
			if (isAccessibleRowSelected(i)) {
				vec->addElement($($Integer::valueOf(i)));
			}
		}
		$var($ints, retval, $new($ints, vec->size()));
		for (int32_t i = 0; i < retval->length; ++i) {
			retval->set(i, $nc(($cast($Integer, $(vec->elementAt(i)))))->intValue());
		}
		return retval;
	}
	return $new($ints, 0);
}

$ints* AccessibleHTML$TableElementInfo$TableAccessibleContext::getSelectedAccessibleColumns() {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->validateIfNecessary()) {
		int32_t nColumns = getAccessibleRowCount();
		$var($Vector, vec, $new($Vector));
		for (int32_t i = 0; i < nColumns; ++i) {
			if (isAccessibleColumnSelected(i)) {
				vec->addElement($($Integer::valueOf(i)));
			}
		}
		$var($ints, retval, $new($ints, vec->size()));
		for (int32_t i = 0; i < retval->length; ++i) {
			retval->set(i, $nc(($cast($Integer, $(vec->elementAt(i)))))->intValue());
		}
		return retval;
	}
	return $new($ints, 0);
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleRow(int32_t index) {
	if (this->this$1->validateIfNecessary()) {
		int32_t var$0 = getAccessibleColumnCount();
		int32_t numCells = var$0 * getAccessibleRowCount();
		if (index >= numCells) {
			return -1;
		} else {
			return $div(index, getAccessibleColumnCount());
		}
	}
	return -1;
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleColumn(int32_t index) {
	if (this->this$1->validateIfNecessary()) {
		int32_t var$0 = getAccessibleColumnCount();
		int32_t numCells = var$0 * getAccessibleRowCount();
		if (index >= numCells) {
			return -1;
		} else {
			return $mod(index, getAccessibleColumnCount());
		}
	}
	return -1;
}

int32_t AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleIndex(int32_t r, int32_t c) {
	if (this->this$1->validateIfNecessary()) {
		bool var$0 = r >= getAccessibleRowCount();
		if (var$0 || c >= getAccessibleColumnCount()) {
			return -1;
		} else {
			return r * getAccessibleColumnCount() + c;
		}
	}
	return -1;
}

$String* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleRowHeader(int32_t r) {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->validateIfNecessary()) {
		$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cellInfo, this->this$1->getCell(r, 0));
		if ($nc(cellInfo)->isHeaderCell()) {
			$var($View, v, cellInfo->getView());
			if (v != nullptr && $nc(this->this$1->this$0)->model != nullptr) {
				try {
					int32_t var$0 = v->getStartOffset();
					int32_t var$1 = v->getEndOffset();
					return $nc($nc(this->this$1->this$0)->model)->getText(var$0, var$1 - v->getStartOffset());
				} catch ($BadLocationException&) {
					$var($BadLocationException, e, $catch());
					return nullptr;
				}
			}
		}
	}
	return nullptr;
}

$String* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleColumnHeader(int32_t c) {
	$useLocalCurrentObjectStackCache();
	if (this->this$1->validateIfNecessary()) {
		$var($AccessibleHTML$TableElementInfo$TableCellElementInfo, cellInfo, this->this$1->getCell(0, c));
		if ($nc(cellInfo)->isHeaderCell()) {
			$var($View, v, cellInfo->getView());
			if (v != nullptr && $nc(this->this$1->this$0)->model != nullptr) {
				try {
					int32_t var$0 = v->getStartOffset();
					int32_t var$1 = v->getEndOffset();
					return $nc($nc(this->this$1->this$0)->model)->getText(var$0, var$1 - v->getStartOffset());
				} catch ($BadLocationException&) {
					$var($BadLocationException, e, $catch());
					return nullptr;
				}
			}
		}
	}
	return nullptr;
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::addRowHeader($AccessibleHTML$TableElementInfo$TableCellElementInfo* cellInfo, int32_t rowNumber) {
	if (this->rowHeadersTable == nullptr) {
		$set(this, rowHeadersTable, $new($AccessibleHTML$TableElementInfo$TableAccessibleContext$AccessibleHeadersTable, this));
	}
	$nc(this->rowHeadersTable)->addHeader(cellInfo, rowNumber);
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::removeFocusListener($FocusListener* l) {
	$AccessibleHTML$HTMLAccessibleContext::removeFocusListener(l);
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::addFocusListener($FocusListener* l) {
	$AccessibleHTML$HTMLAccessibleContext::addFocusListener(l);
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::requestFocus() {
	$AccessibleHTML$HTMLAccessibleContext::requestFocus();
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::isFocusTraversable() {
	return $AccessibleHTML$HTMLAccessibleContext::isFocusTraversable();
}

$Accessible* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleAt($Point* p) {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleAt(p);
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setSize($Dimension* d) {
	$AccessibleHTML$HTMLAccessibleContext::setSize(d);
}

$Dimension* AccessibleHTML$TableElementInfo$TableAccessibleContext::getSize() {
	return $AccessibleHTML$HTMLAccessibleContext::getSize();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setBounds($Rectangle* r) {
	$AccessibleHTML$HTMLAccessibleContext::setBounds(r);
}

$Rectangle* AccessibleHTML$TableElementInfo$TableAccessibleContext::getBounds() {
	return $AccessibleHTML$HTMLAccessibleContext::getBounds();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setLocation($Point* p) {
	$AccessibleHTML$HTMLAccessibleContext::setLocation(p);
}

$Point* AccessibleHTML$TableElementInfo$TableAccessibleContext::getLocation() {
	return $AccessibleHTML$HTMLAccessibleContext::getLocation();
}

$Point* AccessibleHTML$TableElementInfo$TableAccessibleContext::getLocationOnScreen() {
	return $AccessibleHTML$HTMLAccessibleContext::getLocationOnScreen();
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::contains($Point* p) {
	return $AccessibleHTML$HTMLAccessibleContext::contains(p);
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::isShowing() {
	return $AccessibleHTML$HTMLAccessibleContext::isShowing();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setVisible(bool b) {
	$AccessibleHTML$HTMLAccessibleContext::setVisible(b);
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::isVisible() {
	return $AccessibleHTML$HTMLAccessibleContext::isVisible();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setEnabled(bool b) {
	$AccessibleHTML$HTMLAccessibleContext::setEnabled(b);
}

bool AccessibleHTML$TableElementInfo$TableAccessibleContext::isEnabled() {
	return $AccessibleHTML$HTMLAccessibleContext::isEnabled();
}

$FontMetrics* AccessibleHTML$TableElementInfo$TableAccessibleContext::getFontMetrics($Font* f) {
	return $AccessibleHTML$HTMLAccessibleContext::getFontMetrics(f);
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setFont($Font* f) {
	$AccessibleHTML$HTMLAccessibleContext::setFont(f);
}

$Font* AccessibleHTML$TableElementInfo$TableAccessibleContext::getFont() {
	return $AccessibleHTML$HTMLAccessibleContext::getFont();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setCursor($Cursor* cursor) {
	$AccessibleHTML$HTMLAccessibleContext::setCursor(cursor);
}

$Cursor* AccessibleHTML$TableElementInfo$TableAccessibleContext::getCursor() {
	return $AccessibleHTML$HTMLAccessibleContext::getCursor();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setForeground($Color* c) {
	$AccessibleHTML$HTMLAccessibleContext::setForeground(c);
}

$Color* AccessibleHTML$TableElementInfo$TableAccessibleContext::getForeground() {
	return $AccessibleHTML$HTMLAccessibleContext::getForeground();
}

void AccessibleHTML$TableElementInfo$TableAccessibleContext::setBackground($Color* c) {
	$AccessibleHTML$HTMLAccessibleContext::setBackground(c);
}

$Color* AccessibleHTML$TableElementInfo$TableAccessibleContext::getBackground() {
	return $AccessibleHTML$HTMLAccessibleContext::getBackground();
}

$AccessibleComponent* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleComponent() {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleComponent();
}

$Locale* AccessibleHTML$TableElementInfo$TableAccessibleContext::getLocale() {
	return $AccessibleHTML$HTMLAccessibleContext::getLocale();
}

$AccessibleStateSet* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleStateSet() {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleStateSet();
}

$AccessibleContext* AccessibleHTML$TableElementInfo$TableAccessibleContext::getAccessibleContext() {
	return $AccessibleHTML$HTMLAccessibleContext::getAccessibleContext();
}

AccessibleHTML$TableElementInfo$TableAccessibleContext::AccessibleHTML$TableElementInfo$TableAccessibleContext() {
}

$Class* AccessibleHTML$TableElementInfo$TableAccessibleContext::load$($String* name, bool initialize) {
	$loadClass(AccessibleHTML$TableElementInfo$TableAccessibleContext, name, initialize, &_AccessibleHTML$TableElementInfo$TableAccessibleContext_ClassInfo_, allocate$AccessibleHTML$TableElementInfo$TableAccessibleContext);
	return class$;
}

$Class* AccessibleHTML$TableElementInfo$TableAccessibleContext::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax