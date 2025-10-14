#include <bug6768387.h>

#include <bug6768387$1.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6768387$1 = ::bug6768387$1;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$MethodInfo _bug6768387_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6768387::*)()>(&bug6768387::init$))},
	{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&bug6768387::createGui))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6768387::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug6768387_InnerClassesInfo_[] = {
	{"bug6768387$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug6768387_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6768387",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6768387_MethodInfo_,
	nullptr,
	nullptr,
	_bug6768387_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug6768387$1"
};

$Object* allocate$bug6768387($Class* clazz) {
	return $of($alloc(bug6768387));
}

void bug6768387::init$() {
}

void bug6768387::createGui() {
	$var($JTable, table, $new($JTable));
	$var($OutputStream, os, nullptr);
	$var($ObjectOutputStream, out, nullptr);
	try {
		$assign(os, $new($ByteArrayOutputStream));
		$assign(out, $new($ObjectOutputStream, os));
		out->writeObject(table);
		out->close();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(ex));
	}
}

void bug6768387::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6768387$1));
}

bug6768387::bug6768387() {
}

$Class* bug6768387::load$($String* name, bool initialize) {
	$loadClass(bug6768387, name, initialize, &_bug6768387_ClassInfo_, allocate$bug6768387);
	return class$;
}

$Class* bug6768387::class$ = nullptr;