#include <javax/imageio/metadata/IIOInvalidTreeException.h>

#include <javax/imageio/IIOException.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IIOException = ::javax::imageio::IIOException;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace imageio {
		namespace metadata {

$FieldInfo _IIOInvalidTreeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IIOInvalidTreeException, serialVersionUID)},
	{"offendingNode", "Lorg/w3c/dom/Node;", nullptr, $PROTECTED, $field(IIOInvalidTreeException, offendingNode)},
	{}
};

$MethodInfo _IIOInvalidTreeException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(IIOInvalidTreeException::*)($String*,$Node*)>(&IIOInvalidTreeException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(IIOInvalidTreeException::*)($String*,$Throwable*,$Node*)>(&IIOInvalidTreeException::init$))},
	{"getOffendingNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _IIOInvalidTreeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.metadata.IIOInvalidTreeException",
	"javax.imageio.IIOException",
	nullptr,
	_IIOInvalidTreeException_FieldInfo_,
	_IIOInvalidTreeException_MethodInfo_
};

$Object* allocate$IIOInvalidTreeException($Class* clazz) {
	return $of($alloc(IIOInvalidTreeException));
}

void IIOInvalidTreeException::init$($String* message, $Node* offendingNode) {
	$IIOException::init$(message);
	$set(this, offendingNode, nullptr);
	$set(this, offendingNode, offendingNode);
}

void IIOInvalidTreeException::init$($String* message, $Throwable* cause, $Node* offendingNode) {
	$IIOException::init$(message, cause);
	$set(this, offendingNode, nullptr);
	$set(this, offendingNode, offendingNode);
}

$Node* IIOInvalidTreeException::getOffendingNode() {
	return this->offendingNode;
}

IIOInvalidTreeException::IIOInvalidTreeException() {
}

IIOInvalidTreeException::IIOInvalidTreeException(const IIOInvalidTreeException& e) : $IIOException(e) {
}

void IIOInvalidTreeException::throw$() {
	throw *this;
}

$Class* IIOInvalidTreeException::load$($String* name, bool initialize) {
	$loadClass(IIOInvalidTreeException, name, initialize, &_IIOInvalidTreeException_ClassInfo_, allocate$IIOInvalidTreeException);
	return class$;
}

$Class* IIOInvalidTreeException::class$ = nullptr;

		} // metadata
	} // imageio
} // javax