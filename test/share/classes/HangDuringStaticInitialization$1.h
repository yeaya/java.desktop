#ifndef _HangDuringStaticInitialization$1_h_
#define _HangDuringStaticInitialization$1_h_
//$ class HangDuringStaticInitialization$1
//$ extends java.nio.file.SimpleFileVisitor

#include <java/nio/file/SimpleFileVisitor.h>

namespace java {
	namespace nio {
		namespace file {
			class FileVisitResult;
			class Path;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
			}
		}
	}
}

class HangDuringStaticInitialization$1 : public ::java::nio::file::SimpleFileVisitor {
	$class(HangDuringStaticInitialization$1, $NO_CLASS_INIT, ::java::nio::file::SimpleFileVisitor)
public:
	HangDuringStaticInitialization$1();
	void init$();
	virtual ::java::nio::file::FileVisitResult* visitFile(::java::nio::file::Path* file, ::java::nio::file::attribute::BasicFileAttributes* attrs);
	virtual ::java::nio::file::FileVisitResult* visitFile(Object$* file, ::java::nio::file::attribute::BasicFileAttributes* attrs) override;
};

#endif // _HangDuringStaticInitialization$1_h_