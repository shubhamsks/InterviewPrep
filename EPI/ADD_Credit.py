import bintrees
class ClientsCreditsInfo:
	def __init__(self):
		self._offset = 0
		self._client_to_credit = {}
		self._credit_to_clients = bintrees.RBTree()

	def insert(self, client_id, c):
		self.remove(client_id)
		self._client_to_credit[client_id] = c - self._offset
		self._credit_to_clients.setdefault(c - self._offset, set()).add(client_id)
	def remove(self, client_id):
		credit = self._client_to_credit.get(client_id)
		if credit is not None:
			self._credit_to_clients[credit].remove(client_id)
			if not self._credit_to_clients[credit]:
				del self._credit_to_clients[credit]
			del self._client_to_credit[client_id]
			return True
		return False
	def lookup(self, client_id):
		credit = self._client_to_credit.get(client_id)
		return None if credit is None else credit + self._offset 
	def add_to_all(self,c):
		self._offset += c
	def max(self):
		if not self._credit_to_clients:
			return ''
		clients = self._credit_to_clients.max_item()[1]
		return '' if not clients else next(iter(clients))
