#include <javax/swing/plaf/basic/BasicTableUI$TableTransferHandler.h>

#include <java/awt/datatransfer/Transferable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTable.h>
#include <javax/swing/TransferHandler.h>
#include <javax/swing/plaf/basic/BasicTableUI.h>
#include <javax/swing/plaf/basic/BasicTransferable.h>
#include <jcpp.h>

#undef COPY

using $Transferable = ::java::awt::datatransfer::Transferable;
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JTable = ::javax::swing::JTable;
using $TransferHandler = ::javax::swing::TransferHandler;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicTableUI = ::javax::swing::plaf::basic::BasicTableUI;
using $BasicTransferable = ::javax::swing::plaf::basic::BasicTransferable;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicTableUI$TableTransferHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(BasicTableUI$TableTransferHandler::*)()>(&BasicTableUI$TableTransferHandler::init$))},
	{"createTransferable", "(Ljavax/swing/JComponent;)Ljava/awt/datatransfer/Transferable;", nullptr, $PROTECTED},
	{"getSourceActions", "(Ljavax/swing/JComponent;)I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicTableUI$TableTransferHandler_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTableUI$TableTransferHandler", "javax.swing.plaf.basic.BasicTableUI", "TableTransferHandler", $STATIC},
	{}
};

$ClassInfo _BasicTableUI$TableTransferHandler_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTableUI$TableTransferHandler",
	"javax.swing.TransferHandler",
	"javax.swing.plaf.UIResource",
	nullptr,
	_BasicTableUI$TableTransferHandler_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTableUI$TableTransferHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTableUI"
};

$Object* allocate$BasicTableUI$TableTransferHandler($Class* clazz) {
	return $of($alloc(BasicTableUI$TableTransferHandler));
}

int32_t BasicTableUI$TableTransferHandler::hashCode() {
	 return this->$TransferHandler::hashCode();
}

bool BasicTableUI$TableTransferHandler::equals(Object$* arg0) {
	 return this->$TransferHandler::equals(arg0);
}

$Object* BasicTableUI$TableTransferHandler::clone() {
	 return this->$TransferHandler::clone();
}

$String* BasicTableUI$TableTransferHandler::toString() {
	 return this->$TransferHandler::toString();
}

void BasicTableUI$TableTransferHandler::finalize() {
	this->$TransferHandler::finalize();
}

void BasicTableUI$TableTransferHandler::init$() {
	$TransferHandler::init$();
}

$Transferable* BasicTableUI$TableTransferHandler::createTransferable($JComponent* c) {
	if ($instanceOf($JTable, c)) {
		$var($JTable, table, $cast($JTable, c));
		$var($ints, rows, nullptr);
		$var($ints, cols, nullptr);
		bool var$0 = !$nc(table)->getRowSelectionAllowed();
		if (var$0 && !table->getColumnSelectionAllowed()) {
			return nullptr;
		}
		if (!$nc(table)->getRowSelectionAllowed()) {
			int32_t rowCount = table->getRowCount();
			$assign(rows, $new($ints, rowCount));
			for (int32_t counter = 0; counter < rowCount; ++counter) {
				rows->set(counter, counter);
			}
		} else {
			$assign(rows, table->getSelectedRows());
		}
		if (!$nc(table)->getColumnSelectionAllowed()) {
			int32_t colCount = table->getColumnCount();
			$assign(cols, $new($ints, colCount));
			for (int32_t counter = 0; counter < colCount; ++counter) {
				cols->set(counter, counter);
			}
		} else {
			$assign(cols, table->getSelectedColumns());
		}
		if (rows == nullptr || cols == nullptr || $nc(rows)->length == 0 || $nc(cols)->length == 0) {
			return nullptr;
		}
		$var($StringBuilder, plainStr, $new($StringBuilder));
		$var($StringBuilder, htmlStr, $new($StringBuilder));
		htmlStr->append("<html>\n<body>\n<table>\n"_s);
		for (int32_t row = 0; row < $nc(rows)->length; ++row) {
			htmlStr->append("<tr>\n"_s);
			for (int32_t col = 0; col < $nc(cols)->length; ++col) {
				$var($Object, obj, $nc(table)->getValueAt(rows->get(row), cols->get(col)));
				$var($String, val, (obj == nullptr) ? ""_s : $nc($of(obj))->toString());
				plainStr->append(val)->append(u'\t');
				htmlStr->append("  <td>"_s)->append(val)->append("</td>\n"_s);
			}
			$nc(plainStr->deleteCharAt(plainStr->length() - 1))->append(u'\n');
			htmlStr->append("</tr>\n"_s);
		}
		plainStr->deleteCharAt(plainStr->length() - 1);
		htmlStr->append("</table>\n</body>\n</html>"_s);
		$var($String, var$1, plainStr->toString());
		return $new($BasicTransferable, var$1, $(htmlStr->toString()));
	}
	return nullptr;
}

int32_t BasicTableUI$TableTransferHandler::getSourceActions($JComponent* c) {
	return $TransferHandler::COPY;
}

BasicTableUI$TableTransferHandler::BasicTableUI$TableTransferHandler() {
}

$Class* BasicTableUI$TableTransferHandler::load$($String* name, bool initialize) {
	$loadClass(BasicTableUI$TableTransferHandler, name, initialize, &_BasicTableUI$TableTransferHandler_ClassInfo_, allocate$BasicTableUI$TableTransferHandler);
	return class$;
}

$Class* BasicTableUI$TableTransferHandler::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax