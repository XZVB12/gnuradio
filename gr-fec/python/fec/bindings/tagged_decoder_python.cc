/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/pybind11.h>
#include <pybind11/complex.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/fec/tagged_decoder.h>

void bind_tagged_decoder(py::module& m)
{
    using tagged_decoder    = gr::fec::tagged_decoder;


    py::class_<tagged_decoder, gr::tagged_stream_block, gr::block, gr::basic_block,
        std::shared_ptr<tagged_decoder>>(m, "tagged_decoder")

        .def(py::init(&tagged_decoder::make),
           py::arg("my_decoder"), 
           py::arg("input_item_size"), 
           py::arg("output_item_size"), 
           py::arg("lengthtagname") = "packet_len", 
           py::arg("mtu") = 1500 
        )
        

        .def("work",&tagged_decoder::work,
            py::arg("noutput_items"), 
            py::arg("ninput_items"), 
            py::arg("input_items"), 
            py::arg("output_items") 
        )
        .def("calculate_output_stream_length",&tagged_decoder::calculate_output_stream_length,
            py::arg("ninput_items") 
        )
        ;


} 
