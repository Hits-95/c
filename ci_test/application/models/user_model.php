<?php 

	class user_model extends CI_model {

		//add user in database...
		public function add($user) {

			$this->db->insert('user', $user);
		}

		//get all users...
		public function getUsers() {

			return $this->db->get('user')->result_array();
		}

		//get single user
		public function getUser($id) {
			return $this->db->where('id', $id )
			->get('user')->row();
		}

		//update user
		public function update($id, $data){
			return $this->db->where('id', $id)
				->update('user', $data);
		}

		//delete user
		public function delete($id) {
			return $this->db->delete('user', ['id' => $id]);
		}
	}
?>