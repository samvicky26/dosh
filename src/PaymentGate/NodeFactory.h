// Copyright (c) 2012-2017, The CryptoNote developers, The Dosh developers
//
// This file is part of Dosh.
//
// Dosh is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Dosh is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Dosh.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include "INode.h"

#include <string>

#include "Logging/LoggerRef.h"

namespace PaymentService {

class NodeFactory {
public:
  static CryptoNote::INode* createNode(const std::string& daemonAddress, uint16_t daemonPort, Logging::ILogger& logger);
  static CryptoNote::INode* createNodeStub();
private:
  NodeFactory();
  ~NodeFactory();

  CryptoNote::INode* getNode(const std::string& daemonAddress, uint16_t daemonPort);

  static NodeFactory factory;
};

} //namespace PaymentService
