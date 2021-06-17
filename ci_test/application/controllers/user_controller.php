<?php 

	class user_controller extends CI_Controller {

		//show list of users...
		public function index() {

			$this->load->model('user_model');
			$data['users'] = $this->user_model->getUsers();
			$this->load->view('list', $data);

		}

		//insert user in database...
		public function add_user() {

			$this->load->model('user_model');
			//validations...
			$this->form_validation->set_rules('name','Name', 'required');
			$this->form_validation->set_rules('addr', 'Address', 'required');
			$this->form_validation->set_rules('mno', 'Mobile No', 'required');

			if($this->form_validation->run() == false) {
				$this->load->view('add');
			} else {
				
				//save into database...
				$post = $this->input->post();
				$this->user_model->add($post);
				return redirect('user_controller/');
			}	
		}

		//update data
		public function update($id) {
			
			$this->load->model('user_model');
			$data['user']  = $this->user_model->getUser($id);
			
			$this->load->view('edit', $data);

		}

		public function saveUpdate($id) {

			$this->load->model('user_model');
			$this->user_model->update($id, $this->input->post());
			return redirect('user_controller/');
		}

		//delete data
		public function delete($id) {
			
			$this->load->model('user_model');
			$this->user_model->delete($id);
			return redirect('user_controller/');
		}


	}
?>