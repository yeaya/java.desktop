#include <Test4165217.h>

#include <java/awt/Color.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Random.h>
#include <javax/swing/JColorChooser.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Random = ::java::util::Random;
using $JColorChooser = ::javax::swing::JColorChooser;

$MethodInfo _Test4165217_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Test4165217::*)()>(&Test4165217::init$))},
	{"copy", "(Ljavax/swing/JColorChooser;)Ljavax/swing/JColorChooser;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JColorChooser*(*)($JColorChooser*)>(&Test4165217::copy))},
	{"deserialize", "([B)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($bytes*)>(&Test4165217::deserialize)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&Test4165217::main))},
	{"serialize", "(Ljava/lang/Object;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)(Object$*)>(&Test4165217::serialize)), "java.io.IOException"},
	{}
};

$ClassInfo _Test4165217_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"Test4165217",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Test4165217_MethodInfo_
};

$Object* allocate$Test4165217($Class* clazz) {
	return $of($alloc(Test4165217));
}

void Test4165217::init$() {
}

void Test4165217::main($StringArray* args) {
	$var($JColorChooser, chooser, $new($JColorChooser));
	chooser->setColor($$new($Color, $$new($Random)->nextInt()));
	$var($Color, before, chooser->getColor());
	$var($Color, after, $nc($(copy(chooser)))->getColor());
	if (!$nc(after)->equals(before)) {
		$throwNew($Error, "color is changed after serialization"_s);
	}
}

$JColorChooser* Test4165217::copy($JColorChooser* chooser) {
	try {
		return $cast($JColorChooser, deserialize($(serialize(chooser))));
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, exception, $catch());
		$throwNew($Error, "unexpected exception during class creation"_s, exception);
	} catch ($IOException&) {
		$var($IOException, exception, $catch());
		$throwNew($Error, "unexpected exception during serialization"_s, exception);
	}
	$shouldNotReachHere();
}

$bytes* Test4165217::serialize(Object$* object) {
	$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
	$var($ObjectOutputStream, oos, $new($ObjectOutputStream, baos));
	oos->writeObject(object);
	oos->flush();
	return baos->toByteArray();
}

$Object* Test4165217::deserialize($bytes* array) {
	$var($ByteArrayInputStream, bais, $new($ByteArrayInputStream, array));
	$var($ObjectInputStream, ois, $new($ObjectInputStream, bais));
	return $of(ois->readObject());
}

Test4165217::Test4165217() {
}

$Class* Test4165217::load$($String* name, bool initialize) {
	$loadClass(Test4165217, name, initialize, &_Test4165217_ClassInfo_, allocate$Test4165217);
	return class$;
}

$Class* Test4165217::class$ = nullptr;