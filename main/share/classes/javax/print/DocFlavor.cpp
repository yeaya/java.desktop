#include <javax/print/DocFlavor.h>

#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Map.h>
#include <javax/print/MimeType.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Map = ::java::util::Map;
using $MimeType = ::javax::print::MimeType;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace javax {
	namespace print {

$FieldInfo _DocFlavor_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocFlavor, serialVersionUID)},
	{"hostEncoding", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DocFlavor, hostEncoding)},
	{"myMimeType", "Ljavax/print/MimeType;", nullptr, $PRIVATE | $TRANSIENT, $field(DocFlavor, myMimeType)},
	{"myClassName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DocFlavor, myClassName)},
	{"myStringValue", "Ljava/lang/String;", nullptr, $PRIVATE | $TRANSIENT, $field(DocFlavor, myStringValue)},
	{}
};

$MethodInfo _DocFlavor_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DocFlavor::*)($String*,$String*)>(&DocFlavor::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getMediaSubtype", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMediaType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRepresentationClassName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getStringValue", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DocFlavor::*)()>(&DocFlavor::getStringValue))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DocFlavor::*)($ObjectInputStream*)>(&DocFlavor::readObject)), "java.lang.ClassNotFoundException,java.io.IOException"},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(DocFlavor::*)($ObjectOutputStream*)>(&DocFlavor::writeObject)), "java.io.IOException"},
	{}
};

$InnerClassInfo _DocFlavor_InnerClassesInfo_[] = {
	{"javax.print.DocFlavor$SERVICE_FORMATTED", "javax.print.DocFlavor", "SERVICE_FORMATTED", $PUBLIC | $STATIC},
	{"javax.print.DocFlavor$READER", "javax.print.DocFlavor", "READER", $PUBLIC | $STATIC},
	{"javax.print.DocFlavor$STRING", "javax.print.DocFlavor", "STRING", $PUBLIC | $STATIC},
	{"javax.print.DocFlavor$CHAR_ARRAY", "javax.print.DocFlavor", "CHAR_ARRAY", $PUBLIC | $STATIC},
	{"javax.print.DocFlavor$URL", "javax.print.DocFlavor", "URL", $PUBLIC | $STATIC},
	{"javax.print.DocFlavor$INPUT_STREAM", "javax.print.DocFlavor", "INPUT_STREAM", $PUBLIC | $STATIC},
	{"javax.print.DocFlavor$BYTE_ARRAY", "javax.print.DocFlavor", "BYTE_ARRAY", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _DocFlavor_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.print.DocFlavor",
	"java.lang.Object",
	"java.io.Serializable,java.lang.Cloneable",
	_DocFlavor_FieldInfo_,
	_DocFlavor_MethodInfo_,
	nullptr,
	nullptr,
	_DocFlavor_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.print.DocFlavor$SERVICE_FORMATTED,javax.print.DocFlavor$READER,javax.print.DocFlavor$STRING,javax.print.DocFlavor$CHAR_ARRAY,javax.print.DocFlavor$URL,javax.print.DocFlavor$INPUT_STREAM,javax.print.DocFlavor$BYTE_ARRAY"
};

$Object* allocate$DocFlavor($Class* clazz) {
	return $of($alloc(DocFlavor));
}

$Object* DocFlavor::clone() {
	 return this->$Serializable::clone();
}

void DocFlavor::finalize() {
	this->$Serializable::finalize();
}

$String* DocFlavor::hostEncoding = nullptr;

void DocFlavor::init$($String* mimeType, $String* className) {
	$set(this, myStringValue, nullptr);
	if (className == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, myMimeType, $new($MimeType, mimeType));
	$set(this, myClassName, className);
}

$String* DocFlavor::getMimeType() {
	return $nc(this->myMimeType)->getMimeType();
}

$String* DocFlavor::getMediaType() {
	return $nc(this->myMimeType)->getMediaType();
}

$String* DocFlavor::getMediaSubtype() {
	return $nc(this->myMimeType)->getMediaSubtype();
}

$String* DocFlavor::getParameter($String* paramName) {
	$useLocalCurrentObjectStackCache();
	return $cast($String, $nc($($nc(this->myMimeType)->getParameterMap()))->get($($nc(paramName)->toLowerCase())));
}

$String* DocFlavor::getRepresentationClassName() {
	return this->myClassName;
}

$String* DocFlavor::toString() {
	return getStringValue();
}

int32_t DocFlavor::hashCode() {
	return $nc($(getStringValue()))->hashCode();
}

bool DocFlavor::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	return obj != nullptr && $instanceOf(DocFlavor, obj) && $nc($(getStringValue()))->equals($($nc(($cast(DocFlavor, obj)))->getStringValue()));
}

$String* DocFlavor::getStringValue() {
	if (this->myStringValue == nullptr) {
		$set(this, myStringValue, $str({this->myMimeType, "; class=\""_s, this->myClassName, "\""_s}));
	}
	return this->myStringValue;
}

void DocFlavor::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	s->writeObject($($nc(this->myMimeType)->getMimeType()));
}

void DocFlavor::readObject($ObjectInputStream* s) {
	$nc(s)->defaultReadObject();
	$set(this, myMimeType, $new($MimeType, $cast($String, $(s->readObject()))));
}

void clinit$DocFlavor($Class* class$) {
	$beforeCallerSensitive();
	{
		$assignStatic(DocFlavor::hostEncoding, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "file.encoding"_s)))));
	}
}

DocFlavor::DocFlavor() {
}

$Class* DocFlavor::load$($String* name, bool initialize) {
	$loadClass(DocFlavor, name, initialize, &_DocFlavor_ClassInfo_, clinit$DocFlavor, allocate$DocFlavor);
	return class$;
}

$Class* DocFlavor::class$ = nullptr;

	} // print
} // javax