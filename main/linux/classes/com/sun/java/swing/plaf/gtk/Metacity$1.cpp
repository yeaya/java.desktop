#include <com/sun/java/swing/plaf/gtk/Metacity$1.h>

#include <com/sun/java/swing/plaf/gtk/Metacity.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $Metacity = ::com::sun::java::swing::plaf::gtk::Metacity;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace gtk {

$FieldInfo _Metacity$1_FieldInfo_[] = {
	{"val$xmlFile", "Ljava/net/URL;", nullptr, $FINAL | $SYNTHETIC, $field(Metacity$1, val$xmlFile)},
	{}
};

$MethodInfo _Metacity$1_MethodInfo_[] = {
	{"<init>", "(Ljava/net/URL;)V", "()V", 0, $method(static_cast<void(Metacity$1::*)($URL*)>(&Metacity$1::init$))},
	{"run", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Metacity$1_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.gtk.Metacity",
	"getXMLDoc",
	"(Ljava/net/URL;)Lorg/w3c/dom/Document;"
};

$InnerClassInfo _Metacity$1_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.gtk.Metacity$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Metacity$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.gtk.Metacity$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Metacity$1_FieldInfo_,
	_Metacity$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/InputStream;>;",
	&_Metacity$1_EnclosingMethodInfo_,
	_Metacity$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.gtk.Metacity"
};

$Object* allocate$Metacity$1($Class* clazz) {
	return $of($alloc(Metacity$1));
}

void Metacity$1::init$($URL* val$xmlFile) {
	$set(this, val$xmlFile, val$xmlFile);
}

$Object* Metacity$1::run() {
	try {
		return $of($new($BufferedInputStream, $($nc(this->val$xmlFile)->openStream())));
	} catch ($IOException& ex) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

Metacity$1::Metacity$1() {
}

$Class* Metacity$1::load$($String* name, bool initialize) {
	$loadClass(Metacity$1, name, initialize, &_Metacity$1_ClassInfo_, allocate$Metacity$1);
	return class$;
}

$Class* Metacity$1::class$ = nullptr;

					} // gtk
				} // plaf
			} // swing
		} // java
	} // sun
} // com