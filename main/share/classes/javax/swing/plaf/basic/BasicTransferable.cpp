#include <javax/swing/plaf/basic/BasicTransferable.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/datatransfer/UnsupportedFlavorException.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/ClassNotFoundException.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

using $DataFlavorArray = $Array<::java::awt::datatransfer::DataFlavor>;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $UnsupportedFlavorException = ::java::awt::datatransfer::UnsupportedFlavorException;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIResource = ::javax::swing::plaf::UIResource;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicTransferable_FieldInfo_[] = {
	{"plainData", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicTransferable, plainData)},
	{"htmlData", "Ljava/lang/String;", nullptr, $PROTECTED, $field(BasicTransferable, htmlData)},
	{"htmlFlavors", "[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(BasicTransferable, htmlFlavors)},
	{"stringFlavors", "[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(BasicTransferable, stringFlavors)},
	{"plainFlavors", "[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PRIVATE | $STATIC, $staticField(BasicTransferable, plainFlavors)},
	{}
};

$MethodInfo _BasicTransferable_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicTransferable::*)($String*,$String*)>(&BasicTransferable::init$))},
	{"createInputStream", "(Ljava/awt/datatransfer/DataFlavor;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PRIVATE, $method(static_cast<$InputStream*(BasicTransferable::*)($DataFlavor*,$String*)>(&BasicTransferable::createInputStream)), "java.io.IOException,java.awt.datatransfer.UnsupportedFlavorException"},
	{"getHTMLData", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getPlainData", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getRicherData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PROTECTED, nullptr, "java.awt.datatransfer.UnsupportedFlavorException"},
	{"getRicherFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PROTECTED},
	{"getTransferData", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.awt.datatransfer.UnsupportedFlavorException,java.io.IOException"},
	{"getTransferDataFlavors", "()[Ljava/awt/datatransfer/DataFlavor;", nullptr, $PUBLIC},
	{"isDataFlavorSupported", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC},
	{"isHTMLFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PROTECTED},
	{"isHTMLSupported", "()Z", nullptr, $PROTECTED},
	{"isPlainFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PROTECTED},
	{"isPlainSupported", "()Z", nullptr, $PROTECTED},
	{"isRicherFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PROTECTED},
	{"isStringFlavor", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _BasicTransferable_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicTransferable",
	"java.lang.Object",
	"java.awt.datatransfer.Transferable,javax.swing.plaf.UIResource",
	_BasicTransferable_FieldInfo_,
	_BasicTransferable_MethodInfo_
};

$Object* allocate$BasicTransferable($Class* clazz) {
	return $of($alloc(BasicTransferable));
}

int32_t BasicTransferable::hashCode() {
	 return this->$Transferable::hashCode();
}

bool BasicTransferable::equals(Object$* arg0) {
	 return this->$Transferable::equals(arg0);
}

$Object* BasicTransferable::clone() {
	 return this->$Transferable::clone();
}

$String* BasicTransferable::toString() {
	 return this->$Transferable::toString();
}

void BasicTransferable::finalize() {
	this->$Transferable::finalize();
}

$DataFlavorArray* BasicTransferable::htmlFlavors = nullptr;
$DataFlavorArray* BasicTransferable::stringFlavors = nullptr;
$DataFlavorArray* BasicTransferable::plainFlavors = nullptr;

void BasicTransferable::init$($String* plainData, $String* htmlData) {
	$set(this, plainData, plainData);
	$set(this, htmlData, htmlData);
}

$DataFlavorArray* BasicTransferable::getTransferDataFlavors() {
	$useLocalCurrentObjectStackCache();
	$var($DataFlavorArray, richerFlavors, getRicherFlavors());
	int32_t nRicher = (richerFlavors != nullptr) ? $nc(richerFlavors)->length : 0;
	int32_t nHTML = (isHTMLSupported()) ? $nc(BasicTransferable::htmlFlavors)->length : 0;
	int32_t nPlain = (isPlainSupported()) ? $nc(BasicTransferable::plainFlavors)->length : 0;
	int32_t nString = (isPlainSupported()) ? $nc(BasicTransferable::stringFlavors)->length : 0;
	int32_t nFlavors = nRicher + nHTML + nPlain + nString;
	$var($DataFlavorArray, flavors, $new($DataFlavorArray, nFlavors));
	int32_t nDone = 0;
	if (nRicher > 0) {
		$System::arraycopy(richerFlavors, 0, flavors, nDone, nRicher);
		nDone += nRicher;
	}
	if (nHTML > 0) {
		$System::arraycopy(BasicTransferable::htmlFlavors, 0, flavors, nDone, nHTML);
		nDone += nHTML;
	}
	if (nPlain > 0) {
		$System::arraycopy(BasicTransferable::plainFlavors, 0, flavors, nDone, nPlain);
		nDone += nPlain;
	}
	if (nString > 0) {
		$System::arraycopy(BasicTransferable::stringFlavors, 0, flavors, nDone, nString);
		nDone += nString;
	}
	return flavors;
}

bool BasicTransferable::isDataFlavorSupported($DataFlavor* flavor) {
	$var($DataFlavorArray, flavors, getTransferDataFlavors());
	for (int32_t i = 0; i < $nc(flavors)->length; ++i) {
		if ($nc(flavors->get(i))->equals(flavor)) {
			return true;
		}
	}
	return false;
}

$Object* BasicTransferable::getTransferData($DataFlavor* flavor) {
	$useLocalCurrentObjectStackCache();
	$var($DataFlavorArray, richerFlavors, getRicherFlavors());
	if (isRicherFlavor(flavor)) {
		return $of(getRicherData(flavor));
	} else if (isHTMLFlavor(flavor)) {
		$var($String, data, getHTMLData());
		$assign(data, (data == nullptr) ? ""_s : data);
		if ($of($String::class$)->equals($nc(flavor)->getRepresentationClass())) {
			return $of(data);
		} else {
			$load($Reader);
			if ($of($Reader::class$)->equals($nc(flavor)->getRepresentationClass())) {
				return $of($new($StringReader, data));
			} else {
				$load($InputStream);
				if ($of($InputStream::class$)->equals($nc(flavor)->getRepresentationClass())) {
					return $of(createInputStream(flavor, data));
				}
			}
		}
	} else if (isPlainFlavor(flavor)) {
		$var($String, data, getPlainData());
		$assign(data, (data == nullptr) ? ""_s : data);
		if ($of($String::class$)->equals($nc(flavor)->getRepresentationClass())) {
			return $of(data);
		} else {
			$load($Reader);
			if ($of($Reader::class$)->equals($nc(flavor)->getRepresentationClass())) {
				return $of($new($StringReader, data));
			} else {
				$load($InputStream);
				if ($of($InputStream::class$)->equals($nc(flavor)->getRepresentationClass())) {
					return $of(createInputStream(flavor, data));
				}
			}
		}
	} else if (isStringFlavor(flavor)) {
		$var($String, data, getPlainData());
		$assign(data, (data == nullptr) ? ""_s : data);
		return $of(data);
	}
	$throwNew($UnsupportedFlavorException, flavor);
}

$InputStream* BasicTransferable::createInputStream($DataFlavor* flavor, $String* data) {
	$useLocalCurrentObjectStackCache();
	$var($String, cs, $DataFlavorUtil::getTextCharset(flavor));
	if (cs == nullptr) {
		$throwNew($UnsupportedFlavorException, flavor);
	}
	return $new($ByteArrayInputStream, $($nc(data)->getBytes(cs)));
}

bool BasicTransferable::isRicherFlavor($DataFlavor* flavor) {
	$var($DataFlavorArray, richerFlavors, getRicherFlavors());
	int32_t nFlavors = (richerFlavors != nullptr) ? $nc(richerFlavors)->length : 0;
	for (int32_t i = 0; i < nFlavors; ++i) {
		if ($nc(richerFlavors->get(i))->equals(flavor)) {
			return true;
		}
	}
	return false;
}

$DataFlavorArray* BasicTransferable::getRicherFlavors() {
	return nullptr;
}

$Object* BasicTransferable::getRicherData($DataFlavor* flavor) {
	return $of(nullptr);
}

bool BasicTransferable::isHTMLFlavor($DataFlavor* flavor) {
	$var($DataFlavorArray, flavors, BasicTransferable::htmlFlavors);
	for (int32_t i = 0; i < $nc(flavors)->length; ++i) {
		if ($nc(flavors->get(i))->equals(flavor)) {
			return true;
		}
	}
	return false;
}

bool BasicTransferable::isHTMLSupported() {
	return this->htmlData != nullptr;
}

$String* BasicTransferable::getHTMLData() {
	return this->htmlData;
}

bool BasicTransferable::isPlainFlavor($DataFlavor* flavor) {
	$var($DataFlavorArray, flavors, BasicTransferable::plainFlavors);
	for (int32_t i = 0; i < $nc(flavors)->length; ++i) {
		if ($nc(flavors->get(i))->equals(flavor)) {
			return true;
		}
	}
	return false;
}

bool BasicTransferable::isPlainSupported() {
	return this->plainData != nullptr;
}

$String* BasicTransferable::getPlainData() {
	return this->plainData;
}

bool BasicTransferable::isStringFlavor($DataFlavor* flavor) {
	$var($DataFlavorArray, flavors, BasicTransferable::stringFlavors);
	for (int32_t i = 0; i < $nc(flavors)->length; ++i) {
		if ($nc(flavors->get(i))->equals(flavor)) {
			return true;
		}
	}
	return false;
}

void clinit$BasicTransferable($Class* class$) {
	$useLocalCurrentObjectStackCache();
	{
		try {
			$assignStatic(BasicTransferable::htmlFlavors, $new($DataFlavorArray, 3));
			$nc(BasicTransferable::htmlFlavors)->set(0, $$new($DataFlavor, "text/html;class=java.lang.String"_s));
			$nc(BasicTransferable::htmlFlavors)->set(1, $$new($DataFlavor, "text/html;class=java.io.Reader"_s));
			$nc(BasicTransferable::htmlFlavors)->set(2, $$new($DataFlavor, "text/html;charset=unicode;class=java.io.InputStream"_s));
			$assignStatic(BasicTransferable::plainFlavors, $new($DataFlavorArray, 3));
			$nc(BasicTransferable::plainFlavors)->set(0, $$new($DataFlavor, "text/plain;class=java.lang.String"_s));
			$nc(BasicTransferable::plainFlavors)->set(1, $$new($DataFlavor, "text/plain;class=java.io.Reader"_s));
			$nc(BasicTransferable::plainFlavors)->set(2, $$new($DataFlavor, "text/plain;charset=unicode;class=java.io.InputStream"_s));
			$assignStatic(BasicTransferable::stringFlavors, $new($DataFlavorArray, 2));
			$init($DataFlavor);
			$nc(BasicTransferable::stringFlavors)->set(0, $$new($DataFlavor, $$str({$DataFlavor::javaJVMLocalObjectMimeType, ";class=java.lang.String"_s})));
			$nc(BasicTransferable::stringFlavors)->set(1, $DataFlavor::stringFlavor);
		} catch ($ClassNotFoundException& cle) {
			$nc($System::err)->println("error initializing javax.swing.plaf.basic.BasicTranserable"_s);
		}
	}
}

BasicTransferable::BasicTransferable() {
}

$Class* BasicTransferable::load$($String* name, bool initialize) {
	$loadClass(BasicTransferable, name, initialize, &_BasicTransferable_ClassInfo_, clinit$BasicTransferable, allocate$BasicTransferable);
	return class$;
}

$Class* BasicTransferable::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax