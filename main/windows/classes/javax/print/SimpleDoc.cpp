#include <javax/print/SimpleDoc.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/CharArrayReader.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/print/DocFlavor.h>
#include <javax/print/attribute/AttributeSetUtilities.h>
#include <javax/print/attribute/DocAttributeSet.h>
#include <sun/reflect/misc/ReflectUtil.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $CharArrayReader = ::java::io::CharArrayReader;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Doc = ::javax::print::Doc;
using $DocFlavor = ::javax::print::DocFlavor;
using $AttributeSetUtilities = ::javax::print::attribute::AttributeSetUtilities;
using $DocAttributeSet = ::javax::print::attribute::DocAttributeSet;
using $ReflectUtil = ::sun::reflect::misc::ReflectUtil;

namespace javax {
	namespace print {

$FieldInfo _SimpleDoc_FieldInfo_[] = {
	{"flavor", "Ljavax/print/DocFlavor;", nullptr, $PRIVATE, $field(SimpleDoc, flavor)},
	{"attributes", "Ljavax/print/attribute/DocAttributeSet;", nullptr, $PRIVATE, $field(SimpleDoc, attributes)},
	{"printData", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(SimpleDoc, printData)},
	{"reader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(SimpleDoc, reader)},
	{"inStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(SimpleDoc, inStream)},
	{}
};

$MethodInfo _SimpleDoc_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/print/DocFlavor;Ljavax/print/attribute/DocAttributeSet;)V", nullptr, $PUBLIC, $method(static_cast<void(SimpleDoc::*)(Object$*,$DocFlavor*,$DocAttributeSet*)>(&SimpleDoc::init$))},
	{"getAttributes", "()Ljavax/print/attribute/DocAttributeSet;", nullptr, $PUBLIC},
	{"getDocFlavor", "()Ljavax/print/DocFlavor;", nullptr, $PUBLIC},
	{"getPrintData", "()Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getReaderForText", "()Ljava/io/Reader;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getStreamForBytes", "()Ljava/io/InputStream;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _SimpleDoc_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.print.SimpleDoc",
	"java.lang.Object",
	"javax.print.Doc",
	_SimpleDoc_FieldInfo_,
	_SimpleDoc_MethodInfo_
};

$Object* allocate$SimpleDoc($Class* clazz) {
	return $of($alloc(SimpleDoc));
}

void SimpleDoc::init$(Object$* printData, $DocFlavor* flavor, $DocAttributeSet* attributes) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (flavor == nullptr || printData == nullptr) {
		$throwNew($IllegalArgumentException, "null argument(s)"_s);
	}
	$Class* repClass = nullptr;
	try {
		$var($String, className, $nc(flavor)->getRepresentationClassName());
		$ReflectUtil::checkPackageAccess(className);
		repClass = $Class::forName(className, false, $($($Thread::currentThread())->getContextClassLoader()));
	} catch ($Throwable&) {
		$var($Throwable, e, $catch());
		$throwNew($IllegalArgumentException, "unknown representation class"_s);
	}
	if (!$nc(repClass)->isInstance(printData)) {
		$throwNew($IllegalArgumentException, "data is not of declared type"_s);
	}
	$set(this, flavor, flavor);
	if (attributes != nullptr) {
		$set(this, attributes, $AttributeSetUtilities::unmodifiableView(attributes));
	}
	$set(this, printData, printData);
}

$DocFlavor* SimpleDoc::getDocFlavor() {
	return this->flavor;
}

$DocAttributeSet* SimpleDoc::getAttributes() {
	return this->attributes;
}

$Object* SimpleDoc::getPrintData() {
	return $of(this->printData);
}

$Reader* SimpleDoc::getReaderForText() {
	if ($instanceOf($Reader, this->printData)) {
		return $cast($Reader, this->printData);
	}
	$synchronized(this) {
		if (this->reader != nullptr) {
			return this->reader;
		}
		if ($instanceOf($chars, this->printData)) {
			$set(this, reader, $new($CharArrayReader, $cast($chars, this->printData)));
		} else if ($instanceOf($String, this->printData)) {
			$set(this, reader, $new($StringReader, $cast($String, this->printData)));
		}
	}
	return this->reader;
}

$InputStream* SimpleDoc::getStreamForBytes() {
	if ($instanceOf($InputStream, this->printData)) {
		return $cast($InputStream, this->printData);
	}
	$synchronized(this) {
		if (this->inStream != nullptr) {
			return this->inStream;
		}
		if ($instanceOf($bytes, this->printData)) {
			$set(this, inStream, $new($ByteArrayInputStream, $cast($bytes, this->printData)));
		}
	}
	return this->inStream;
}

SimpleDoc::SimpleDoc() {
}

$Class* SimpleDoc::load$($String* name, bool initialize) {
	$loadClass(SimpleDoc, name, initialize, &_SimpleDoc_ClassInfo_, allocate$SimpleDoc);
	return class$;
}

$Class* SimpleDoc::class$ = nullptr;

	} // print
} // javax