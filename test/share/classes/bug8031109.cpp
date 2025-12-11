#include <bug8031109.h>

#include <bug8031109$1.h>
#include <java/io/BufferedWriter.h>
#include <java/io/File.h>
#include <java/io/FileWriter.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Runnable.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef TEXT_HTML

using $bug8031109$1 = ::bug8031109$1;
using $BufferedWriter = ::java::io::BufferedWriter;
using $File = ::java::io::File;
using $FileWriter = ::java::io::FileWriter;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$FieldInfo _bug8031109_FieldInfo_[] = {
	{"TEXT_HTML", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8031109, TEXT_HTML)},
	{}
};

$MethodInfo _bug8031109_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8031109::*)()>(&bug8031109::init$))},
	{"generateHtmlFile", "()Ljava/net/URL;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URL*(*)()>(&bug8031109::generateHtmlFile))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8031109::main)), "java.lang.Exception"},
	{}
};

$InnerClassInfo _bug8031109_InnerClassesInfo_[] = {
	{"bug8031109$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8031109_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8031109",
	"java.lang.Object",
	nullptr,
	_bug8031109_FieldInfo_,
	_bug8031109_MethodInfo_,
	nullptr,
	nullptr,
	_bug8031109_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8031109$1"
};

$Object* allocate$bug8031109($Class* clazz) {
	return $of($alloc(bug8031109));
}

$String* bug8031109::TEXT_HTML = nullptr;

void bug8031109::init$() {
}

void bug8031109::main($StringArray* args) {
	$init(bug8031109);
	$SwingUtilities::invokeAndWait($$new($bug8031109$1));
}

$URL* bug8031109::generateHtmlFile() {
	$init(bug8031109);
	$useLocalCurrentObjectStackCache();
	$var($File, file, $new($File, "hello.html"_s));
	try {
		$var($FileWriter, fw, $new($FileWriter, $(file->getAbsoluteFile())));
		{
			$var($Throwable, var$0, nullptr);
			$var($URL, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($BufferedWriter, bw, $new($BufferedWriter, fw));
					{
						$var($Throwable, var$3, nullptr);
						$var($URL, var$5, nullptr);
						bool return$4 = false;
						try {
							try {
								bw->write("<head></head><body>Hello World!</body>"_s);
								$assign(var$5, $nc($(file->toURI()))->toURL());
								return$4 = true;
								goto $finally1;
							} catch ($Throwable& t$) {
								try {
									bw->close();
								} catch ($Throwable& x2) {
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable& var$6) {
							$assign(var$3, var$6);
						} $finally1: {
							bw->close();
						}
						if (var$3 != nullptr) {
							$throw(var$3);
						}
						if (return$4) {
							$assign(var$2, var$5);
							return$1 = true;
							goto $finally;
						}
					}
				} catch ($Throwable& t$) {
					try {
						fw->close();
					} catch ($Throwable& x2) {
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable& var$7) {
				$assign(var$0, var$7);
			} $finally: {
				fw->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

bug8031109::bug8031109() {
}

void clinit$bug8031109($Class* class$) {
	$assignStatic(bug8031109::TEXT_HTML, "text/html"_s);
}

$Class* bug8031109::load$($String* name, bool initialize) {
	$loadClass(bug8031109, name, initialize, &_bug8031109_ClassInfo_, clinit$bug8031109, allocate$bug8031109);
	return class$;
}

$Class* bug8031109::class$ = nullptr;