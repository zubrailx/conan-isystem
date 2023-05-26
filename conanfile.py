import os

from conan import ConanFile
from conan.tools.cmake import CMakeToolchain
from conan.tools.cmake import cmake_layout, CMake
from conan.tools.files import copy


class cws_proto(ConanFile):
    name = "cws_proto"
    version = "1.0"

    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeDeps"

    def export_sources(self):
        es_proto_cpp_folder = os.path.join(self.export_sources_folder)
        copy(self, "conanfile.py", self.recipe_folder, es_proto_cpp_folder)
        copy(self, "CMakeLists.txt", self.recipe_folder, es_proto_cpp_folder)
        copy(self, "src/*", self.recipe_folder, es_proto_cpp_folder)

    def source(self):
        pass

    def requirements(self):
        self.requires("protobuf/3.21.9")
        self.requires("grpc/1.50.1")

    def layout(self):
        cmake_layout(self)

    def generate(self):
        tc = CMakeToolchain(self)
        tc.generate()

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build(cli_args=["--verbose"])

    def package(self):
        cmake = CMake(self)
        cmake.install()
