#include <javax/swing/plaf/basic/BasicLookAndFeel$3.h>

#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicLookAndFeel$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$3, this$0)},
	{"val$soundFile", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$3, val$soundFile)},
	{}
};

$MethodInfo _BasicLookAndFeel$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicLookAndFeel;Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(BasicLookAndFeel$3::*)($BasicLookAndFeel*,$String*)>(&BasicLookAndFeel$3::init$))},
	{"run", "()[B", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicLookAndFeel$3_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicLookAndFeel",
	"loadAudioData",
	"(Ljava/lang/String;)[B"
};

$InnerClassInfo _BasicLookAndFeel$3_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicLookAndFeel$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicLookAndFeel$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicLookAndFeel$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_BasicLookAndFeel$3_FieldInfo_,
	_BasicLookAndFeel$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<[B>;",
	&_BasicLookAndFeel$3_EnclosingMethodInfo_,
	_BasicLookAndFeel$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicLookAndFeel"
};

$Object* allocate$BasicLookAndFeel$3($Class* clazz) {
	return $of($alloc(BasicLookAndFeel$3));
}

void BasicLookAndFeel$3::init$($BasicLookAndFeel* this$0, $String* val$soundFile) {
	$set(this, this$0, this$0);
	$set(this, val$soundFile, val$soundFile);
}

$Object* BasicLookAndFeel$3::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($InputStream, resource, $of(this->this$0)->getClass()->getResourceAsStream(this->val$soundFile));
		if (resource == nullptr) {
			return $of(nullptr);
		}
		{
			$var($BufferedInputStream, in, $new($BufferedInputStream, resource));
			{
				$var($Throwable, var$0, nullptr);
				$var($Object, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						$assign(var$2, in->readAllBytes());
						return$1 = true;
						goto $finally;
					} catch ($Throwable& t$) {
						try {
							in->close();
						} catch ($Throwable& x2) {
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable& var$3) {
					$assign(var$0, var$3);
				} $finally: {
					in->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} catch ($IOException& ioe) {
		$nc($System::err)->println($(ioe->toString()));
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

BasicLookAndFeel$3::BasicLookAndFeel$3() {
}

$Class* BasicLookAndFeel$3::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$3, name, initialize, &_BasicLookAndFeel$3_ClassInfo_, allocate$BasicLookAndFeel$3);
	return class$;
}

$Class* BasicLookAndFeel$3::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax