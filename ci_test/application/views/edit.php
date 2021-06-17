<?php include 'header.php' ?>

<!DOCTYPE html>
<html lang="en">
<head>
	<meta charset="UTF-8">
	<meta name="viewport" content="width=device-width, initial-scale=1.0">
</head>
<body>
	<div class="container">
		<h2 class="mt-2"> Update User</h2>
		<?php echo form_open("user_controller/saveUpdate/{$user->id}") ?>

		<div class="row">
			<div class="col-lg-6">
				<label>Name </label>
				<?php 
					echo form_input(['name' => 'name', 'class' => 'form-control', 'placeholder' => 'Enter Name ...', 'value' => set_value('name', $user->name)]);
				?>
			</div>
			<div class="col-lg-6">
				<?php echo form_error('name'); ?>
			</div>
		</div>

		<div class="row mt-1">
			<div class="col-lg-6">
				<label>Address </label>
				<?php 
					echo form_textarea(['name' => 'addr', 'class' => 'form-control', 'placeholder' => 'Enter Address ...', 'value' => set_value('addr', $user->addr)]);
				?>
			</div>
			<div class="col-lg-6">
				<?php echo form_error('addr'); ?>
			</div>
		</div>

		<div class="row mt-1">
			<div class="col-lg-6">
				<label>Mobile No </label>
				<?php
					echo form_input(['name' => 'mno', 'class' => 'form-control', 'placeholder' => 'Enter Mobile No ...', 'value' => set_value('mno', $user->mno)]);
			    ?>
			</div>
			<div class="col-lg-6">
				<?php echo form_error('mno'); ?>
			</div>
		</div>

		<div class="row mt-3">
			<div class="col-lg-6">
				
				<?php echo form_submit(['type' => 'submit', 'value' => 'Update', 'class' => 'btn btn-primary']); ?>
				<?=anchor('user_controller/','Cancel', ['class'=>'btn btn-danger']);?> 

			</div>
			<div class="col-lg-6"></div>
		</div>
	
	</div>
</body>
</html>